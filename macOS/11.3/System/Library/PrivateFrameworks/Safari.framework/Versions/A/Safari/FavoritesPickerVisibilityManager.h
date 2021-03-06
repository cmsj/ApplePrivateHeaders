/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FavoritesPickerVisibilityController, FavoritesPickerVisibilityManagerDataSource;
@class NSTextInputContext, BlockCoalescer;

@interface FavoritesPickerVisibilityManager : NSObject {

	char _observingKeyboardInputSourceOverlayVisibility;
	NSTextInputContext* _textInputContextBeingObserved;
	BlockCoalescer* _visibilityUpdateCoalescer;
	id<FavoritesPickerVisibilityController> _pickerVisibilityController;
	id<FavoritesPickerVisibilityManagerDataSource> _dataSource;

}

@property (assign,nonatomic,__weak) id<FavoritesPickerVisibilityController> pickerVisibilityController;              //@synthesize pickerVisibilityController=_pickerVisibilityController - In the implementation block
@property (assign,nonatomic,__weak) id<FavoritesPickerVisibilityManagerDataSource> dataSource;                       //@synthesize dataSource=_dataSource - In the implementation block
-(void)dealloc;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id<FavoritesPickerVisibilityManagerDataSource>)dataSource;
-(void)setDataSource:(id<FavoritesPickerVisibilityManagerDataSource>)arg1 ;
-(void)browserViewControllerDidFirstMeaningfulPaint:(id)arg1 ;
-(void)registerForWindowNotifications;
-(void)unregisterFromWindowNotifications;
-(void)unregisterFromNotificationsForUnifiedFieldCompletionController:(id)arg1 ;
-(void)backgroundLoadControllerDidCommitBackgroundLoad;
-(void)startObservingKeyboardMethodsBarVisibility;
-(void)stopObservingKeyboardMethodsBarVisibility;
-(void)setPickerVisibilityController:(id<FavoritesPickerVisibilityController>)arg1 ;
-(void)registerForNotificationsForUnifiedFieldCompletionController:(id)arg1 ;
-(void)_showFavoritesPickerFromFavoritesBeingInstalledNotification:(id)arg1 ;
-(void)_showFavoritesPickerFromUnifiedFieldNotification:(id)arg1 ;
-(void)_dismissFavoritesPicker:(id)arg1 ;
-(void)_observeKeyboardInputSourceOverlayVisibilityIfNeeded;
-(void)_stopObservingKeyboardInputSourceOverlayVisibility;
-(void)_scheduleFavoritesPickerToBeDismissed;
-(char)_isInputMethodsBarVisible;
-(void)_scheduleFavoritesPickerToBeShown;
-(id<FavoritesPickerVisibilityController>)pickerVisibilityController;
@end

