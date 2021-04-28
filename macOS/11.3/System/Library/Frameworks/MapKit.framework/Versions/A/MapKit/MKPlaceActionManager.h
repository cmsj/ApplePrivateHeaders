/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MKPlaceActionManagerProtocol.h>

@class MKPlaceCardActionItem, TUCallProvider, NSString;

@interface MKPlaceActionManager : NSObject <MKPlaceActionManagerProtocol> {

	MKPlaceCardActionItem* _favoriteActionItem;
	MKPlaceCardActionItem* _homeActionItem;
	MKPlaceCardActionItem* _collectionActionItem;
	MKPlaceCardActionItem* _callActionItem;
	MKPlaceCardActionItem* _websiteActionItem;
	MKPlaceCardActionItem* _brandStoreActionItem;
	TUCallProvider* _callProvider;
	char _placeInBookmarks;
	char _placeInShortcuts;
	char _showContactActions;
	char _isCurrentLocation;
	id _placeCardDelegate;
	id _transitCardDelegate;

}

@property (assign,nonatomic) char placeInBookmarks;                      //@synthesize placeInBookmarks=_placeInBookmarks - In the implementation block
@property (assign,nonatomic) char placeInShortcuts;                      //@synthesize placeInShortcuts=_placeInShortcuts - In the implementation block
@property (assign,nonatomic) char showContactActions;                    //@synthesize showContactActions=_showContactActions - In the implementation block
@property (assign,nonatomic) char isCurrentLocation;                     //@synthesize isCurrentLocation=_isCurrentLocation - In the implementation block
@property (assign,nonatomic,__weak) id placeCardDelegate;                //@synthesize placeCardDelegate=_placeCardDelegate - In the implementation block
@property (assign,nonatomic,__weak) id transitCardDelegate;              //@synthesize transitCardDelegate=_transitCardDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)delegate;
-(unsigned long long)options;
-(void)openURL:(id)arg1 ;
-(id)contact;
-(id)mapItem;
-(void)setIsCurrentLocation:(char)arg1 ;
-(char)isCurrentLocation;
-(void)setPlaceCardDelegate:(id)arg1 ;
-(id)placeItem;
-(id)createFooterActions;
-(void)setPlaceInShortcuts:(char)arg1 ;
-(void)setShowContactActions:(char)arg1 ;
-(void)setPlaceInBookmarks:(char)arg1 ;
-(char)showContactActions;
-(char)_showReportAProblem;
-(char)placeInBookmarks;
-(char)placeInShortcuts;
-(id)createRowActionsWithStyle:(unsigned long long)arg1 ;
-(void)performAction:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_launchMaps;
-(void)_canMakeCalls:(/*^block*/id)arg1 ;
-(id)transitDelegate;
-(id)transitLineItem;
-(char)_isCurrentLocationOrDroppedPin;
-(void)_enableStoreAction;
-(id)favoriteItemForFooter;
-(char)_showReportAnIssue;
-(id)reportAProblemFooterAction;
-(char)_showMapItemIdentifier;
-(void)addLayoutInfoIfNeeded:(id)arg1 ;
-(char)_showAddPlaceEdit;
-(char)_showCollectionItem;
-(char)_showHomeShortcutItem;
-(id)collectionItemForFooter:(char)arg1 ;
-(id)addtoHomeItem;
-(id)shortPlacecardFooterActions;
-(id)reportAProblemAddPlaceFooterAction;
-(id)optIntoAddingContributionsAction;
-(id)placeCardDelegate;
-(id)transitCardDelegate;
-(void)setTransitCardDelegate:(id)arg1 ;
@end
