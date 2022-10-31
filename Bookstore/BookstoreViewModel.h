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

    private:
        Bookstore::BookSku m_bookSku{ nullptr };
    };
}
namespace winrt::Bookstore::factory_implementation
{
    struct BookstoreViewModel : BookstoreViewModelT<BookstoreViewModel, implementation::BookstoreViewModel>
    {
    };
}