/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilities.framework/Versions/A/FlightUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FlightUtilities/FlightUtilities-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/NSPageControllerDelegate.h>
#import <libobjc.A.dylib/FUFlightInfoViewProtocol.h>

@protocol FUFlightViewDelegate;
@class FUPlaneTrackerAnnotationView, NSMutableArray, FUFLightTrack, FUFlightPageController, NSLayoutConstraint, NSArray, MKMapView, NSView, FULabel, FUDotIndicator, NSButton, NSString;

@interface FUFlightView : NSView <NSPageControllerDelegate, FUFlightInfoViewProtocol> {

	FUPlaneTrackerAnnotationView* _planeTracker;
	NSMutableArray* _tracks;
	FUFLightTrack* _currentTrack;
	NSMutableArray* _controllers;
	FUFlightPageController* _pageViewController;
	NSLayoutConstraint* _pageControllerHeightConstraint;
	NSArray* _allLegs;
	unsigned long long _displayStyle;
	char _ignoreMapUpdate;
	char _highlightCurrentFlightLeg;
	char _showInfoPanel;
	long long _style;
	long long _currentFocus;
	MKMapView* _mapView;
	NSView* _mapContainer;
	NSView* _infoView;
	FULabel* _loadingMapLabel;
	NSLayoutConstraint* _bottomInfoConstraint;
	NSView* _flightPaginationContainer;
	NSLayoutConstraint* _bottomPaginationContainerConstraint;
	FUDotIndicator* _flightSelector;
	NSButton* _previousFlightButton;
	NSButton* _nextFlightButton;
	NSArray* _flights;
	long long _selectedFlight;
	long long _selectedLeg;
	id<FUFlightViewDelegate> _delegate;
	NSLayoutConstraint* _topMapMargin;
	NSLayoutConstraint* _bottomMapMargin;
	NSLayoutConstraint* _leftMapMargin;
	NSLayoutConstraint* _rightMapMargin;
	NSLayoutConstraint* _mapWidth;
	NSLayoutConstraint* _mapHeight;
	NSEdgeInsets _mapInsets;

}

@property (assign,nonatomic) long long currentFocus;                                                //@synthesize currentFocus=_currentFocus - In the implementation block
@property (assign,nonatomic,__weak) MKMapView * mapView;                                            //@synthesize mapView=_mapView - In the implementation block
@property (nonatomic,retain) NSView * mapContainer;                                                 //@synthesize mapContainer=_mapContainer - In the implementation block
@property (nonatomic,retain) NSView * infoView;                                                     //@synthesize infoView=_infoView - In the implementation block
@property (nonatomic,retain) FULabel * loadingMapLabel;                                             //@synthesize loadingMapLabel=_loadingMapLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomInfoConstraint;                             //@synthesize bottomInfoConstraint=_bottomInfoConstraint - In the implementation block
@property (nonatomic,retain) NSView * flightPaginationContainer;                                    //@synthesize flightPaginationContainer=_flightPaginationContainer - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomPaginationContainerConstraint;              //@synthesize bottomPaginationContainerConstraint=_bottomPaginationContainerConstraint - In the implementation block
@property (nonatomic,retain) FUDotIndicator * flightSelector;                                       //@synthesize flightSelector=_flightSelector - In the implementation block
@property (nonatomic,retain) NSButton * previousFlightButton;                                       //@synthesize previousFlightButton=_previousFlightButton - In the implementation block
@property (nonatomic,retain) NSButton * nextFlightButton;                                           //@synthesize nextFlightButton=_nextFlightButton - In the implementation block
@property (nonatomic,retain) NSArray * flights;                                                     //@synthesize flights=_flights - In the implementation block
@property (assign,nonatomic) long long selectedFlight;                                              //@synthesize selectedFlight=_selectedFlight - In the implementation block
@property (assign,nonatomic) long long selectedLeg;                                                 //@synthesize selectedLeg=_selectedLeg - In the implementation block
@property (assign,nonatomic) char highlightCurrentFlightLeg;                                        //@synthesize highlightCurrentFlightLeg=_highlightCurrentFlightLeg - In the implementation block
@property (assign,nonatomic) char showInfoPanel;                                                    //@synthesize showInfoPanel=_showInfoPanel - In the implementation block
@property (__weak) id<FUFlightViewDelegate> delegate;                                               //@synthesize delegate=_delegate - In the implementation block
@property (__weak) NSLayoutConstraint * topMapMargin;                                               //@synthesize topMapMargin=_topMapMargin - In the implementation block
@property (__weak) NSLayoutConstraint * bottomMapMargin;                                            //@synthesize bottomMapMargin=_bottomMapMargin - In the implementation block
@property (__weak) NSLayoutConstraint * leftMapMargin;                                              //@synthesize leftMapMargin=_leftMapMargin - In the implementation block
@property (__weak) NSLayoutConstraint * rightMapMargin;                                             //@synthesize rightMapMargin=_rightMapMargin - In the implementation block
@property (__weak) NSLayoutConstraint * mapWidth;                                                   //@synthesize mapWidth=_mapWidth - In the implementation block
@property (__weak) NSLayoutConstraint * mapHeight;                                                  //@synthesize mapHeight=_mapHeight - In the implementation block
@property (assign,nonatomic) long long style;                                                       //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) unsigned long long displayStyle;                                       //@synthesize displayStyle=_displayStyle - In the implementation block
@property (assign,nonatomic) NSEdgeInsets mapInsets;                                                //@synthesize mapInsets=_mapInsets - In the implementation block
@property (assign,nonatomic) char ignoreMapUpdate;                                                  //@synthesize ignoreMapUpdate=_ignoreMapUpdate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<FUFlightViewDelegate>)delegate;
-(void)setDelegate:(id<FUFlightViewDelegate>)arg1 ;
-(long long)style;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setStyle:(long long)arg1 ;
-(void)awakeFromNib;
-(void)setBackgroundStyle:(long long)arg1 ;
-(void)pageController:(id)arg1 didTransitionToObject:(id)arg2 ;
-(id)pageController:(id)arg1 identifierForObject:(id)arg2 ;
-(id)pageController:(id)arg1 viewControllerForIdentifier:(id)arg2 ;
-(void)pageController:(id)arg1 prepareViewController:(id)arg2 withObject:(id)arg3 ;
-(void)pageControllerWillStartLiveTransition:(id)arg1 ;
-(void)pageControllerDidEndLiveTransition:(id)arg1 ;
-(unsigned long long)displayStyle;
-(void)setDisplayStyle:(unsigned long long)arg1 ;
-(void)setMapView:(MKMapView *)arg1 ;
-(MKMapView *)mapView;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(char)arg2 ;
-(id)mapView:(id)arg1 rendererForOverlay:(id)arg2 ;
-(NSArray *)flights;
-(void)setFlights:(NSArray *)arg1 ;
-(void)addTrack:(id)arg1 ;
-(NSView *)infoView;
-(void)setInfoView:(NSView *)arg1 ;
-(void)setCurrentFocus:(long long)arg1 ;
-(long long)currentFocus;
-(char)setFlights:(id)arg1 selectedFlight:(long long)arg2 selectedLeg:(long long)arg3 ;
-(void)setHighlightCurrentFlightLeg:(char)arg1 ;
-(void)setShowInfoPanel:(char)arg1 ;
-(void)setIgnoreMapUpdate:(char)arg1 ;
-(void)updateMapCamera;
-(void)setSelectedLeg:(long long)arg1 ;
-(void)setSelectedFlight:(long long)arg1 ;
-(long long)selectedLeg;
-(long long)selectedFlight;
-(char)highlightCurrentFlightLeg;
-(char)showInfoPanel;
-(void)flightInfoView:(id)arg1 didUpdateFocus:(long long)arg2 ;
-(void)updateMapAppearance;
-(NSView *)mapContainer;
-(void)updateMargins;
-(void)setupStyles;
-(NSView *)flightPaginationContainer;
-(NSLayoutConstraint *)bottomPaginationContainerConstraint;
-(FULabel *)loadingMapLabel;
-(FUDotIndicator *)flightSelector;
-(NSButton *)nextFlightButton;
-(NSButton *)previousFlightButton;
-(id)currentFlight;
-(void)updateMapArcs;
-(NSLayoutConstraint *)bottomInfoConstraint;
-(id)currentLeg;
-(id)infoViewControllerCreate;
-(void)cleanupView;
-(unsigned long long)absoluteLegIndex;
-(void)setAbsoluteIndex:(unsigned long long)arg1 animated:(char)arg2 ;
-(void)fitMap:(char)arg1 ;
-(void)updateBackForwardButtons:(char)arg1 animated:(char)arg2 ;
-(NSLayoutConstraint *)topMapMargin;
-(NSLayoutConstraint *)bottomMapMargin;
-(NSLayoutConstraint *)leftMapMargin;
-(NSLayoutConstraint *)rightMapMargin;
-(NSLayoutConstraint *)mapWidth;
-(NSLayoutConstraint *)mapHeight;
-(NSEdgeInsets)mapInsets;
-(id)flightForLeg:(id)arg1 ;
-(id)departureCamera;
-(id)arrivalCamera;
-(char)hasFollowupContent:(id)arg1 ;
-(id)allLegs;
-(void)setMapInsets:(NSEdgeInsets)arg1 ;
-(id)flightCamera;
-(void)flightSelectionChange:(id)arg1 ;
-(void)saveRawResponse:(id)arg1 ;
-(char)ignoreMapUpdate;
-(void)setMapContainer:(NSView *)arg1 ;
-(void)setLoadingMapLabel:(FULabel *)arg1 ;
-(void)setBottomInfoConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setFlightPaginationContainer:(NSView *)arg1 ;
-(void)setBottomPaginationContainerConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setFlightSelector:(FUDotIndicator *)arg1 ;
-(void)setPreviousFlightButton:(NSButton *)arg1 ;
-(void)setNextFlightButton:(NSButton *)arg1 ;
-(void)setTopMapMargin:(NSLayoutConstraint *)arg1 ;
-(void)setBottomMapMargin:(NSLayoutConstraint *)arg1 ;
-(void)setLeftMapMargin:(NSLayoutConstraint *)arg1 ;
-(void)setRightMapMargin:(NSLayoutConstraint *)arg1 ;
-(void)setMapWidth:(NSLayoutConstraint *)arg1 ;
-(void)setMapHeight:(NSLayoutConstraint *)arg1 ;
@end
