// BookstoreViewModel.h
#pragma once
#include "BookstoreViewModel.g.h"
#include "BookSku.h"

namespace winrt::Bookstore::implementation
{
    struct BookstoreViewModel : BookstoreViewModelT<BookstoreViewModel>
    {
        BookstoreViewModel();

        int32_t SelectedIndex() {
            return m_selectIdex;
        }
        void SelectedIndex(int32_t value) {
            m_selectIdex = value;
        };

        Bookstore::BookSku BookSku();

        Windows::Foundation::Collections::IObservableVector<Bookstore::BookSku> BookSkus();

    private:
        int m_selectIdex{0};
        Bookstore::BookSku m_bookSku{ nullptr };
        Windows::Foundation::Collections::IObservableVector<Bookstore::BookSku> m_bookSkus;
    };
}
namespace winrt::Bookstore::factory_implementation
{
    struct BookstoreViewModel : BookstoreViewModelT<BookstoreViewModel, implementation::BookstoreViewModel>
    {
    };
}