int BSTreeT<T>::Remove(T contents, BSTNodeT<T>& root) {
  if (root != NULL) {
    if (root->GetContents() == contents && root->GetCount() == 1) {
      size_--;
      if (root->GetLeft() == NULL && root->GetRight() == NULL) {
          delete root;
          root = NULL;
      } else if (root->GetLeft() == NULL && root->GetRight() != NULL) {
            BSTNodeT<T> temp = root;
            root = root->GetRight();
            delete temp;
      } else if (root->GetLeft() != NULL && root->GetRight() == NULL) {
        BSTNodeT<T>* temp = root;
        root = root->GetLeft();
        delete temp;
      } else {
        T min = FindMin(root->GetRight());
        root->SetContents(min);
        Remove(min, root->GetRight());
      }
      return 0;
    } else if (root->GetCount() > 1) {
      root->DecrementCount();
      return root->GetCount();
    }
    if (Remove(contents, root->GetLeft()) != -1) {
      return Remove(contents, root->GetLeft());
    }
    return Remove(contents, root->GetRight());
  }
  return -1;
}