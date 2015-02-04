#include <boost/progress.hpp>
#include <boost/static_assert.hpp>

using namespace boost;
using namespace std;

template <int N = 2 >
class new_progress_timer : public timer {
public:
    new_progress_timer(ostream & os = cout) : m_os(os) {
        BOOST_STATIC_ASSERT(N >= 0 && N <= 10);
    }

    ~new_progress_timer(void) {
        try {
            istream :: fmtflags old_flags = m_os.setf(istream :: fixed, istream :: floatfield);
            streamsize old_prec = m_os.precision(N);

            // output time
            m_os << elapsed() << " s\n" << endl;

            // restore
            m_os.flags(old_flags);
            m_os.precision(old_prec);
        } catch (...) {

        }

    }


private:
    ostream & m_os;
};