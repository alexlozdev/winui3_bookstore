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
        m_bookSkus = winrt::single_threaded_observable_vector<Bookstore::BookSku>();
        m_bookSkus.Append(m_bookSku);
    }

    Bookstore::BookSku BookstoreViewModel::BookSku()
    {
        return m_bookSku;
    }

    Windows::Foundation::Collections::IObservableVector<Bookstore::BookSku> BookstoreViewModel::BookSkus()
    {
        return m_bookSkus;
    }
}
