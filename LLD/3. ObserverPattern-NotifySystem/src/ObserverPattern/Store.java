package ObserverPattern;

import ObserverPattern.Observable.IphoneObservableImpl;
import ObserverPattern.Observable.StockObservable;
import ObserverPattern.Observer.EmailAlertObserverImpl;
import ObserverPattern.Observer.MobileAlertObserverImpl;
import ObserverPattern.Observer.NotificationAlertObserver;

public class Store {
    public static void main(String args[]){
        StockObservable iphoneStockObservable = new IphoneObservableImpl();

        NotificationAlertObserver observer1 = new EmailAlertObserverImpl("a@a.com", iphoneStockObservable);
        NotificationAlertObserver observer2 = new EmailAlertObserverImpl("b@a.com", iphoneStockObservable);
        NotificationAlertObserver observer3 = new MobileAlertObserverImpl("x_username", iphoneStockObservable);

        iphoneStockObservable.add(observer1);
        iphoneStockObservable.add(observer2);
        iphoneStockObservable.add(observer3);

        iphoneStockObservable.setStockcount(100);
        iphoneStockObservable.setStockcount(0);
//        iphoneStockObservable.setStockcount(100);
        
    }
}
