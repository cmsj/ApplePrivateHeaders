/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/_MKKVOProxyDelegate.h>
#import <libobjc.A.dylib/MKAnnotationRepresentation.h>
#import <libobjc.A.dylib/MKLocatableObject.h>

@protocol MKAnnotation;
@class MKUserLocationAnnotationViewProxy, _MKAnnotationViewAnchor, GEORouteMatch, NSMutableArray, _MKKVOProxy, _MKAnnotationViewCustomFeatureAnnotation, NSString, NSImage, MKCalloutView, NSView, CALayer, NSColor, _MKStaticMapView, MKUsageCounter, VKAnchorWrapper;

@interface MKAnnotationView : NSView <_MKKVOProxyDelegate, MKAnnotationRepresentation, MKLocatableObject> {

	CLLocationCoordinate2D _presentationCoordinate;
	double _presentationCourse;
	/*^block*/id _presentationCoordinateChangedCallback;
	CLLocationCoordinate2D _coordinate;
	MKUserLocationAnnotationViewProxy* _userLocationProxy;
	double _rotationRadians;
	_MKAnnotationViewAnchor* _anchor;
	GEORouteMatch* _routeMatch;
	double _mapRotationRadians;
	unsigned long long _hiddenReasons;
	NSMutableArray* _hiddenCompletionBlocks;
	double _realAlpha;
	CGPoint _realOffset;
	double _mapPitchRadians;
	SCD_Struct_MK28 _mapDisplayStyle;
	float _selectionPriority;
	_MKKVOProxy* _annotationObserver;
	_MKAnnotationViewCustomFeatureAnnotation* _customFeatureAnnotation;
	char _subclassImplementsAlignmentRectInsets;
	char _shouldKeepCalloutVisible;
	id<MKAnnotation> _annotation;
	float _displayPriority;
	CGRect _collisionFrame;
	NSString* _clusteringIdentifier;
	NSImage* _image;
	long long _collisionMode;
	MKCalloutView* _calloutView;
	NSView* _leftCalloutAccessoryView;
	NSView* _rightCalloutAccessoryView;
	NSView* _detailCalloutAccessoryView;
	NSString* _reuseIdentifier;
	MKAnnotationView* _clusterAnnotationView;
	unsigned long long _mapType;
	unsigned long long _zIndex;
	CGPoint _centerOffset;
	CGPoint _calloutOffset;
	CGPoint _leftCalloutOffset;
	CGPoint _rightCalloutOffset;
	unsigned long long _dragState;
	long long _calloutStyle;
	struct {
		unsigned pendingSelectionAnimated : 1;
		unsigned disabled : 1;
		unsigned selected : 1;
		unsigned canShowCallout : 1;
		unsigned isHighlighted : 1;
		unsigned canDisplayDisclosureInCallout : 1;
		unsigned canDisplayPlacemarkInCallout : 1;
		unsigned draggable : 1;
		unsigned customTransformApplied : 1;
		unsigned internalTransformApplied : 1;
		unsigned animatingToCoordinate : 1;
		unsigned tracking : 1;
		unsigned pendingOffsetAnimation : 1;
		unsigned pendingHideAnimation : 1;
		unsigned setSelectState : 2;
	}  _flags;
	CALayer* _imageLayer;
	long long _titleVisibility;
	long long _subtitleVisibility;
	char _animatingToCoordinate;
	char _tracking;
	char _pendingSelectionAnimated;
	float _zPriority;
	float _selectedZPriority;
	double _direction;
	NSColor* _leftCalloutAccessoryViewBackgroundColor;
	_MKStaticMapView* _staticMapView;
	MKUsageCounter* _usageCounter;
	CGPoint _bottomCalloutOffset;
	NSEdgeInsets _annotationTrackingInsets;

}

@property (setter=_setCalloutView:,getter=_calloutView,nonatomic,retain) MKCalloutView * _calloutView;                                           //@synthesize calloutView=_calloutView - In the implementation block
@property (assign,setter=_setPendingSelectionAnimated:,getter=_isPendingSelectionAnimated,nonatomic) char pendingSelectionAnimated;              //@synthesize pendingSelectionAnimated=_pendingSelectionAnimated - In the implementation block
@property (assign,setter=_setStaticMapView:,getter=_staticMapView,nonatomic,__weak) _MKStaticMapView * staticMapView;                            //@synthesize staticMapView=_staticMapView - In the implementation block
@property (getter=_allowedToShowCallout,nonatomic,readonly) char allowedToShowCallout; 
@property (nonatomic,readonly) VKAnchorWrapper * anchor; 
@property (assign,setter=_setUsageCounter:,getter=_usageCounter,nonatomic,__weak) MKUsageCounter * usageCounter;                                 //@synthesize usageCounter=_usageCounter - In the implementation block
@property (assign) CGPoint center; 
@property (setter=_setRouteMatch:,nonatomic,retain) GEORouteMatch * _routeMatch;                                                                 //@synthesize routeMatch=_routeMatch - In the implementation block
@property (nonatomic,readonly) MKUserLocationAnnotationViewProxy * _userLocationProxy; 
@property (getter=_collisionAlignmentRectInsets,nonatomic,readonly) NSEdgeInsets collisionAlignmentRectInsets; 
@property (getter=_isSelectable,nonatomic,readonly) char selectable; 
@property (getter=_significantBounds,nonatomic,readonly) CGRect significantBounds; 
@property (nonatomic,readonly) CGRect _significantFrame; 
@property (assign,getter=_annotationTrackingInsets,nonatomic) NSEdgeInsets annotationTrackingInsets;                                             //@synthesize annotationTrackingInsets=_annotationTrackingInsets - In the implementation block
@property (nonatomic,retain) NSColor * leftCalloutAccessoryViewBackgroundColor;                                                                  //@synthesize leftCalloutAccessoryViewBackgroundColor=_leftCalloutAccessoryViewBackgroundColor - In the implementation block
@property (assign,setter=_setBottomCalloutOffset:,getter=_bottomCalloutOffset,nonatomic) CGPoint bottomCalloutOffset;                            //@synthesize bottomCalloutOffset=_bottomCalloutOffset - In the implementation block
@property (assign,setter=_setShouldKeepCalloutVisible:,getter=_shouldKeepCalloutVisible,nonatomic) char shouldKeepCalloutVisible;                //@synthesize shouldKeepCalloutVisible=_shouldKeepCalloutVisible - In the implementation block
@property (assign,setter=_setDirection:,nonatomic) double _direction;                                                                            //@synthesize direction=_direction - In the implementation block
@property (assign,setter=_setPresentationCoordinate:,nonatomic) CLLocationCoordinate2D _presentationCoordinate;                                  //@synthesize presentationCoordinate=_presentationCoordinate - In the implementation block
@property (setter=_setPresentationCoordinateChangedCallback:,nonatomic,copy) id _presentationCoordinateChangedCallback;                          //@synthesize presentationCoordinateChangedCallback=_presentationCoordinateChangedCallback - In the implementation block
@property (assign,setter=_setPresentationCourse:,nonatomic) double _presentationCourse;                                                          //@synthesize presentationCourse=_presentationCourse - In the implementation block
@property (assign,setter=_setAnimatingToCoordinate:,getter=_isAnimatingToCoordinate,nonatomic) char _animatingToCoordinate;                      //@synthesize animatingToCoordinate=_animatingToCoordinate - In the implementation block
@property (assign,setter=_setTracking:,getter=_isTracking,nonatomic) char _tracking;                                                             //@synthesize tracking=_tracking - In the implementation block
@property (assign,setter=_setMapDisplayStyle:,getter=_mapDisplayStyle,nonatomic) SCD_Struct_MK28 mapDisplayStyle;                                //@synthesize mapDisplayStyle=_mapDisplayStyle - In the implementation block
@property (assign,setter=_setSelectionPriority:,getter=_selectionPriority,nonatomic) float selectionPriority;                                    //@synthesize selectionPriority=_selectionPriority - In the implementation block
@property (assign,setter=_setMapRotationRadians:,getter=_mapRotationRadians,nonatomic) double mapRotationRadians;                                //@synthesize mapRotationRadians=_mapRotationRadians - In the implementation block
@property (assign,setter=_setMapPitchRadians:,getter=_mapPitchRadians,nonatomic) double mapPitchRadians;                                         //@synthesize mapPitchRadians=_mapPitchRadians - In the implementation block
@property (getter=_collisionFrame,nonatomic,readonly) CGRect collisionFrame;                                                                     //@synthesize collisionFrame=_collisionFrame - In the implementation block
@property (getter=_defaultCollisionAlignmentRectInsets,nonatomic,readonly) NSEdgeInsets defaultCollisionAlignmentRectInsets; 
@property (assign,setter=_setCalloutStyle:,getter=_calloutStyle,nonatomic) long long calloutStyle;                                               //@synthesize calloutStyle=_calloutStyle - In the implementation block
@property (assign,nonatomic) long long titleVisibility;                                                                                          //@synthesize titleVisibility=_titleVisibility - In the implementation block
@property (assign,nonatomic) long long subtitleVisibility;                                                                                       //@synthesize subtitleVisibility=_subtitleVisibility - In the implementation block
@property (nonatomic,readonly) NSString * reuseIdentifier; 
@property (nonatomic,retain) id<MKAnnotation> annotation; 
@property (nonatomic,retain) NSImage * image; 
@property (assign,nonatomic) CGPoint centerOffset; 
@property (assign,nonatomic) CGPoint calloutOffset; 
@property (assign,nonatomic) CGPoint leftCalloutOffset;                                                                                          //@synthesize leftCalloutOffset=_leftCalloutOffset - In the implementation block
@property (assign,nonatomic) CGPoint rightCalloutOffset;                                                                                         //@synthesize rightCalloutOffset=_rightCalloutOffset - In the implementation block
@property (assign,getter=isEnabled,nonatomic) char enabled; 
@property (assign,getter=isHighlighted,nonatomic) char highlighted; 
@property (assign,getter=isSelected,nonatomic) char selected; 
@property (assign,nonatomic) char canShowCallout; 
@property (nonatomic,retain) NSView * leftCalloutAccessoryView;                                                                                  //@synthesize leftCalloutAccessoryView=_leftCalloutAccessoryView - In the implementation block
@property (nonatomic,retain) NSView * rightCalloutAccessoryView;                                                                                 //@synthesize rightCalloutAccessoryView=_rightCalloutAccessoryView - In the implementation block
@property (nonatomic,retain) NSView * detailCalloutAccessoryView;                                                                                //@synthesize detailCalloutAccessoryView=_detailCalloutAccessoryView - In the implementation block
@property (assign,getter=isDraggable,nonatomic) char draggable; 
@property (assign,nonatomic) unsigned long long dragState; 
@property (nonatomic,copy) NSString * clusteringIdentifier;                                                                                      //@synthesize clusteringIdentifier=_clusteringIdentifier - In the implementation block
@property (nonatomic,__weak,readonly) MKAnnotationView * clusterAnnotationView;                                                                  //@synthesize clusterAnnotationView=_clusterAnnotationView - In the implementation block
@property (assign,nonatomic) float displayPriority;                                                                                              //@synthesize displayPriority=_displayPriority - In the implementation block
@property (assign,nonatomic) float zPriority;                                                                                                    //@synthesize zPriority=_zPriority - In the implementation block
@property (assign,nonatomic) float selectedZPriority;                                                                                            //@synthesize selectedZPriority=_selectedZPriority - In the implementation block
@property (assign,nonatomic) long long collisionMode;                                                                                            //@synthesize collisionMode=_collisionMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(unsigned long long)_zIndex;
+(Class)_mapkitLeafClass;
+(char)_isInitiallyHiddenWhenAdded;
+(float)_defaultDisplayPriority;
+(char)_followsTerrain;
+(unsigned long long)_selectedZIndex;
+(Class)calloutViewClass;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(char)isHidden;
-(void)setHidden:(char)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(void)prepareForReuse;
-(void)setImage:(NSImage *)arg1 ;
-(void)layout;
-(CLLocationCoordinate2D)coordinate;
-(char)isFlipped;
-(void)updateLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)accessibilityAttributeNames;
-(id)hitTest:(CGPoint)arg1 ;
-(NSImage *)image;
-(NSEdgeInsets)alignmentRectInsets;
-(void)setHighlighted:(char)arg1 ;
-(char)isHighlighted;
-(char)accessibilityIsIgnored;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(long long)titleVisibility;
-(void)setAlphaValue:(double)arg1 ;
-(id)accessibilityActionDescription:(id)arg1 ;
-(void)accessibilityPerformAction:(id)arg1 ;
-(CGPoint)center;
-(id)menuForEvent:(id)arg1 ;
-(void)viewDidMoveToSuperview;
-(void)_commonInit;
-(double)alphaValue;
-(id)_containerView;
-(char)_isTracking;
-(void)setTitleVisibility:(long long)arg1 ;
-(void)setSelected:(char)arg1 ;
-(char)isSelected;
-(double)_direction;
-(char)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3 ;
-(id)_contentLayer;
-(NSString *)reuseIdentifier;
-(void)_setSelected:(char)arg1 animated:(char)arg2 ;
-(void)setCenter:(CGPoint)arg1 ;
-(unsigned long long)_zIndex;
-(unsigned long long)_mapType;
-(GEORouteMatch *)_routeMatch;
-(id)_mapView;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(char)isProvidingCustomFeature;
-(id)customFeatureAnnotation;
-(void)_setStaticMapView:(id)arg1 ;
-(id<MKAnnotation>)annotation;
-(void)_performStateUpdatesIfNeeded;
-(id)_annotationContainer;
-(CLLocationCoordinate2D)_presentationCoordinate;
-(void)_setPresentationCoordinate:(CLLocationCoordinate2D)arg1 ;
-(double)_presentationCourse;
-(void)_setPresentationCourse:(double)arg1 ;
-(void)_setAnimatingToCoordinate:(char)arg1 ;
-(void)_setTracking:(char)arg1 ;
-(void)_setRouteMatch:(id)arg1 ;
-(NSEdgeInsets)_annotationTrackingInsets;
-(void)_setMapPitchRadians:(double)arg1 ;
-(void)_setMapType:(unsigned long long)arg1 ;
-(void)_setMapDisplayStyle:(SCD_Struct_MK28)arg1 ;
-(MKCalloutView *)_calloutView;
-(void)_mapVisibleCenteringRectChanged;
-(void)_setMapRotationRadians:(double)arg1 ;
-(char)updateCalloutViewIfNeededAnimated:(char)arg1 ;
-(char)_isSelectable;
-(CGRect)_significantBounds;
-(float)_selectionPriority;
-(float)zPriority;
-(void)setDragState:(unsigned long long)arg1 animated:(char)arg2 ;
-(float)displayPriority;
-(NSString *)clusteringIdentifier;
-(void)_didDragWithVelocity:(CGPoint)arg1 ;
-(unsigned long long)dragState;
-(CGPoint)_draggingDropOffset;
-(CGPoint)centerOffset;
-(void)_setPresentationCoordinateChangedCallback:(/*^block*/id)arg1 ;
-(void)_invalidateCachedCoordinate;
-(char)canShowCallout;
-(NSView *)detailCalloutAccessoryView;
-(void)_setHidden:(char)arg1 forReason:(unsigned long long)arg2 animated:(char)arg3 ;
-(MKAnnotationView *)clusterAnnotationView;
-(float)_effectiveZPriority;
-(float)selectedZPriority;
-(void)_transitionTo:(long long)arg1 ;
-(VKAnchorWrapper *)anchor;
-(void)_updateAnchorPosition:(CGPoint)arg1 alignToPixels:(char)arg2 ;
-(void)_updateFromMap;
-(void)_didUpdatePosition;
-(void)setClusteringIdentifier:(NSString *)arg1 ;
-(void)setClusterAnnotationView:(MKAnnotationView *)arg1 ;
-(CGPoint)_offsetToAnnotationView:(id)arg1 ;
-(void)_setPositionOffset:(CGPoint)arg1 animated:(char)arg2 ;
-(char)_isHiddenForReason:(unsigned long long)arg1 ;
-(void)_setHidden:(char)arg1 forReason:(unsigned long long)arg2 animated:(char)arg3 completion:(/*^block*/id)arg4 ;
-(long long)compareForCollision:(id)arg1 ;
-(double)_mapPitchRadians;
-(SCD_Struct_MK28)_mapDisplayStyle;
-(void)setCanShowCallout:(char)arg1 ;
-(void)setCalloutOffset:(CGPoint)arg1 ;
-(void)setLeftCalloutOffset:(CGPoint)arg1 ;
-(void)setRightCalloutOffset:(CGPoint)arg1 ;
-(void)setZPriority:(float)arg1 ;
-(void)setCollisionMode:(long long)arg1 ;
-(long long)collisionMode;
-(void)setDisplayPriority:(float)arg1 ;
-(double)_pointsForDistance:(double)arg1 ;
-(double)_mapRotationRadians;
-(CGPoint)calloutOffset;
-(void)setAnnotation:(id<MKAnnotation>)arg1 ;
-(char)_isAnimatingToCoordinate;
-(CGRect)_mapkit_visibleRect;
-(void)_setVKNavigationPuckMarker:(id)arg1 ;
-(id)_vkNavigationPuckMarker;
-(void)_setSelectionPriority:(float)arg1 ;
-(void)setCenterOffset:(CGPoint)arg1 ;
-(CGPoint)leftCalloutOffset;
-(CGPoint)rightCalloutOffset;
-(NSView *)leftCalloutAccessoryView;
-(void)setLeftCalloutAccessoryView:(NSView *)arg1 ;
-(NSView *)rightCalloutAccessoryView;
-(void)setRightCalloutAccessoryView:(NSView *)arg1 ;
-(void)setDetailCalloutAccessoryView:(NSView *)arg1 ;
-(void)prepareForDisplay;
-(char)_allowedToShowCallout;
-(char)isDraggable;
-(MKUserLocationAnnotationViewProxy *)_userLocationProxy;
-(CGRect)_significantFrame;
-(char)_shouldDeselectWhenDragged;
-(id)viewRepresentation;
-(char)isCollidingWithAnnotationView:(id)arg1 previouslyCollided:(char)arg2 ;
-(NSColor *)leftCalloutAccessoryViewBackgroundColor;
-(void)setLeftCalloutAccessoryViewBackgroundColor:(NSColor *)arg1 ;
-(void)_setUsageCounter:(id)arg1 ;
-(id)_usageCounter;
-(void)setSelected:(char)arg1 animated:(char)arg2 ;
-(char)isPersistent;
-(void)_setHiddenForOffscreen:(char)arg1 ;
-(char)_isPendingSelectionAnimated;
-(void)invalidateCustomFeatureForced:(char)arg1 ;
-(char)_shouldShowCalloutIfSelected;
-(void)_unhideForDisplay;
-(void)prepareForSnapshotting;
-(void)_updateEffectiveZPriority;
-(NSEdgeInsets)_defaultCollisionAlignmentRectInsets;
-(void)setSubtitleVisibility:(long long)arg1 ;
-(id)_effectiveSubtitlesIsCollidable:(char*)arg1 ;
-(long long)subtitleVisibility;
-(long long)_calloutStyle;
-(char)_shouldKeepCalloutVisible;
-(CGPoint)_bottomCalloutOffset;
-(char)shouldShowCallout;
-(void)_setRotationRadians:(double)arg1 withAnimation:(id)arg2 ;
-(void)_dismissCallout:(char)arg1 ;
-(void)_setCalloutStyle:(long long)arg1 ;
-(id)_staticMapView;
-(void)_showCallout:(char)arg1 ;
-(void)_mkObserveValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSEdgeInsets)_collisionAlignmentRectInsets;
-(CGRect)_collisionFrame;
-(float)_defaultZPriority;
-(float)_defaultSelectedZPriority;
-(void)_updateImageLayer;
-(float)_clampZPriority:(float)arg1 ;
-(void)_setZPriority:(float)arg1 ;
-(void)_setSelectedZPriority:(float)arg1 ;
-(void)_addAnnotationObservation;
-(void)_removeAnnotationObservation;
-(long long)_effectiveCalloutStyle;
-(id)_presentationCoordinateChangedCallback;
-(void)_invalidateCustomFeatureForced:(char)arg1 coordinates:(CLLocationCoordinate2D*)arg2 count:(unsigned long long)arg3 ;
-(void)_setDragState:(unsigned long long)arg1 animated:(char)arg2 ;
-(void)_performOffsetAnimationIfNeeded;
-(void)_performHideAnimationIfNeeded;
-(unsigned long long)_orientationCount;
-(char)_hasAlternateOrientation;
-(long long)compareForClustering:(id)arg1 ;
-(void)setSelectedZPriority:(float)arg1 ;
-(void)_setDirection:(double)arg1 ;
-(void)setDraggable:(char)arg1 ;
-(void)setDragState:(unsigned long long)arg1 ;
-(char)_canDisplayDisclosureInCallout;
-(void)_setCanDisplayDisclosureInCallout:(char)arg1 ;
-(char)_canDisplayPlacemarkInCallout;
-(void)_setCanDisplayPlacemarkInCallout:(char)arg1 ;
-(void)_setZIndex:(unsigned long long)arg1 ;
-(void)_enableRotationForHeadingMode:(double)arg1 ;
-(char)_canChangeOrientation;
-(id)_customFeatureAnnotation;
-(void)_setCalloutView:(id)arg1 ;
-(void)_setShouldKeepCalloutVisible:(char)arg1 ;
-(void)_setBottomCalloutOffset:(CGPoint)arg1 ;
-(void)_setPendingSelectionAnimated:(char)arg1 ;
-(void)setAnnotationTrackingInsets:(NSEdgeInsets)arg1 ;
-(id)_effectiveTitleIsCollidable:(char*)arg1 ;
-(void)configureCustomFeature:(id)arg1 ;
@end
