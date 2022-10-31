// BookstoreViewModel.h
#pragma once
#include "BookstoreViewModel.g.h"
#include "BookSku.h"

namespace winrt::Bookstore::implementation
{
    struct BookstoreViewModel : BookstoreViewModelT<BookstoreViewModel>
    {
        BookstoreViewModel();

        Bookstore::BookSku BookSku();

        Windows::Foundation::Collections::IObservableVector<Bookstore::BookSku> BookSkus();

    private:
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