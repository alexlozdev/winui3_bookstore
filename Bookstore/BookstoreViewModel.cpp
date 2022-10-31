#include "pch.h"
#include "BookstoreViewModel.h"
#if __has_include("BookstoreViewModel.g.cpp")
#include "BookstoreViewModel.g.cpp"
#endif

namespace winrt::Bookstore::implementation
{
    BookstoreViewModel::BookstoreViewModel()
    {
        m_bookSku = winrt::make<Bookstore::implementation::BookSku>(L"Atticus");
    }

    Bookstore::BookSku BookstoreViewModel::BookSku()
    {
        return m_bookSku;
    }
}
