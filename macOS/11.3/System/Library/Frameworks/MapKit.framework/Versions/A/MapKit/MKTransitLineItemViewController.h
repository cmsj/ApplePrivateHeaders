/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKStackingViewController.h>
#import <libobjc.A.dylib/MKStackingViewControllerDelegate.h>
#import <libobjc.A.dylib/MKPlaceCardEncyclopedicControllerDelegate.h>
#import <libobjc.A.dylib/MKPlaceCardHeaderViewControllerDelegate.h>
#import <libobjc.A.dylib/MKETAProviderDelegate.h>
#import <libobjc.A.dylib/MKPlaceHeaderButtonsViewControllerDelegate.h>
#import <libobjc.A.dylib/_MKInfoCardController.h>
#import <libobjc.A.dylib/_MKInfoCardAnalyticsDelegate.h>
#import <libobjc.A.dylib/MKPlaceCardActionControllerDelegate.h>

@protocol GEOTransitLineItem, MKTransitLineItemViewControllerDelegate;
@class MKPlaceCardHeaderViewController, MKPlaceHeaderButtonsViewController, MKETAProvider, MKPlaceActionManager, MKPlaceCardActionsViewController, NSNumber, MKPlaceCardActionItem, GEOAutomobileOptions, GEOTransitOptions, GEOCyclingOptions, NSString;

@interface MKTransitLineItemViewController : MKStackingViewController <MKStackingViewControllerDelegate, MKPlaceCardEncyclopedicControllerDelegate, MKPlaceCardHeaderViewControllerDelegate, MKETAProviderDelegate, MKPlaceHeaderButtonsViewControllerDelegate, _MKInfoCardController, _MKInfoCardAnalyticsDelegate, MKPlaceCardActionControllerDelegate> {

	MKPlaceCardHeaderViewController* _headerViewController;
	MKPlaceHeaderButtonsViewController* _buttonsHeaderController;
	MKETAProvider* _etaProvider;
	MKPlaceActionManager* _actionManager;
	MKPlaceCardActionsViewController* _actionsViewController;
	char _loading;
	id<GEOTransitLineItem> _transitLineItem;
	id<MKTransitLineItemViewControllerDelegate> _delegate;
	NSNumber* _favorited;
	MKPlaceCardActionItem* _addToFavoritesItem;
	MKPlaceCardActionItem* _removeFromFavoritesItem;
	GEOAutomobileOptions* _automobileOptions;
	GEOTransitOptions* _transitOptions;
	GEOCyclingOptions* _cyclingOptions;

}

@property (nonatomic,retain) NSNumber * favorited;                                                     //@synthesize favorited=_favorited - In the implementation block
@property (nonatomic,retain) MKPlaceCardActionItem * addToFavoritesItem;                               //@synthesize addToFavoritesItem=_addToFavoritesItem - In the implementation block
@property (nonatomic,retain) MKPlaceCardActionItem * removeFromFavoritesItem;                          //@synthesize removeFromFavoritesItem=_removeFromFavoritesItem - In the implementation block
@property (nonatomic,readonly) id<GEOTransitLineItem> transitLineItem;                                 //@synthesize transitLineItem=_transitLineItem - In the implementation block
@property (getter=isLoading,nonatomic,readonly) char loading;                                          //@synthesize loading=_loading - In the implementation block
@property (assign,nonatomic,__weak) id<MKTransitLineItemViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) GEOAutomobileOptions * automobileOptions;                                 //@synthesize automobileOptions=_automobileOptions - In the implementation block
@property (nonatomic,retain) GEOTransitOptions * transitOptions;                                       //@synthesize transitOptions=_transitOptions - In the implementation block
@property (nonatomic,retain) GEOCyclingOptions * cyclingOptions;                                       //@synthesize cyclingOptions=_cyclingOptions - In the implementation block
-(id<MKTransitLineItemViewControllerDelegate>)delegate;
-(void)setDelegate:(id<MKTransitLineItemViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)setLoading:(char)arg1 ;
-(char)isLoading;
-(GEOAutomobileOptions *)automobileOptions;
-(GEOCyclingOptions *)cyclingOptions;
-(GEOTransitOptions *)transitOptions;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(void)setCyclingOptions:(GEOCyclingOptions *)arg1 ;
-(void)setTransitOptions:(GEOTransitOptions *)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)infoCardAnalyticsDidSelectAction:(int)arg1 eventValue:(id)arg2 feedbackDelegateSelector:(int)arg3 ;
-(void)infoCardAnalyticsDidSelectAction:(int)arg1 target:(int)arg2 eventValue:(id)arg3 feedbackDelegateSelector:(int)arg4 ;
-(void)infoCardAnalyticsDidSelectAction:(int)arg1 target:(int)arg2 eventValue:(id)arg3 actionURL:(id)arg4 photoID:(id)arg5 feedbackDelegateSelector:(int)arg6 ;
-(void)infoCardTransitAnalyticsDidSelectionAction:(int)arg1 resultIndex:(long long)arg2 targetID:(unsigned long long)arg3 transitSystem:(id)arg4 transitDepartureSequence:(id)arg5 transitCardCategory:(int)arg6 transitIncident:(id)arg7 feedbackDelegateSelector:(int)arg8 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)_updateViewControllers;
-(void)setFavorited:(NSNumber *)arg1 ;
-(double)stackingViewController:(id)arg1 heightForSeparatorBetweenUpperViewController:(id)arg2 andLowerViewController:(id)arg3 ;
-(void)placeCardEncyclopedicControllerDidSelectShowArticle:(id)arg1 ;
-(int)mapTypeForETAProvider:(id)arg1 ;
-(void)placeHeaderButtonsViewController:(id)arg1 didSelectPrimaryType:(unsigned long long)arg2 withView:(id)arg3 ;
-(void)placeActionManager:(id)arg1 didSelectShareFromView:(id)arg2 ;
-(void)placeCardActionControllerDidSelectReportAProblem:(id)arg1 fromView:(id)arg2 ;
-(void)placeCardActionControllerDidSelectAddToFavorites:(id)arg1 ;
-(void)placeCardActionControllerDidSelectRemoveFromFavorites:(id)arg1 ;
-(id)initWithTransitLineItem:(id)arg1 ;
-(NSNumber *)favorited;
-(id<GEOTransitLineItem>)transitLineItem;
-(void)setTransitLineItem:(id<GEOTransitLineItem>)arg1 ;
-(void)setTransitLineItem:(id)arg1 loading:(char)arg2 ;
-(void)resetNearestStation;
-(double)placeCardHeaderViewControllerTrailingConstantForTitle:(id)arg1 ;
-(char)placeCardHeaderViewControllerShouldOverrideCallToAction:(id)arg1 ;
-(MKPlaceCardActionItem *)addToFavoritesItem;
-(void)setAddToFavoritesItem:(MKPlaceCardActionItem *)arg1 ;
-(MKPlaceCardActionItem *)removeFromFavoritesItem;
-(void)setRemoveFromFavoritesItem:(MKPlaceCardActionItem *)arg1 ;
@end
