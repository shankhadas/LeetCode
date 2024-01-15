package ObserverPattern.Observable;

import ObserverPattern.Observer.NotificationAlertObserver;

import java.util.ArrayList;
import java.util.List;

public class IphoneObservableImpl implements StockObservable{
    public List<NotificationAlertObserver> observerList = new ArrayList<>();
    public int stockCount =0;

    public void add(NotificationAlertObserver observer) {observerList.add(observer);}

    public void remove(NotificationAlertObserver observer) {observerList.remove(observer);}


    public void notifySubsribers() {
        for(NotificationAlertObserver observer : observerList){
            observer.update();
        }
    }

    public void setStockcount(int newStockAded){
        if(stockCount == 0){
            notifySubsribers();
        }
        stockCount += newStockAded;
    }

    public int getStockCount() {return stockCount;}
}
