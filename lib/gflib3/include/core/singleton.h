namespace gfl {

struct ISingleton {
    virtual void OnFinalize();
    virtual void OnDestroy();
};

template <class T> class Singleton : ISingleton {
    T s_instance;
};

}  // namespace gfl
