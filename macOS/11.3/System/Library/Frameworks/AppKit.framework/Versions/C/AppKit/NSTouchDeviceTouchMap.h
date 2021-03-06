/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSMutableDictionary;

@interface NSTouchDeviceTouchMap : NSObject {

	long long _flushCount;
	NSMutableSet* _touches;
	NSMutableSet* _cancelledTouches;
	NSMutableDictionary* _cachedBeginTouches;
	NSMutableSet* _activeGestureRecognizers;
	NSMutableSet* _claimedTouchIdentities;
	NSMutableSet* _commandeeredTouchIdentities;
	NSMutableDictionary* _touchesToGestureRecognizersMap;

}

@property (retain) NSMutableSet * touches;                                  //@synthesize touches=_touches - In the implementation block
@property (retain) NSMutableSet * cancelledTouches;                         //@synthesize cancelledTouches=_cancelledTouches - In the implementation block
@property (retain) NSMutableDictionary * cachedBeginTouches;                //@synthesize cachedBeginTouches=_cachedBeginTouches - In the implementation block
@property (retain) NSMutableSet * claimedTouchIdentities;                   //@synthesize claimedTouchIdentities=_claimedTouchIdentities - In the implementation block
@property (retain) NSMutableSet * commandeeredTouchIdentities;              //@synthesize commandeeredTouchIdentities=_commandeeredTouchIdentities - In the implementation block
@property (retain) NSMutableSet * activeGestureRecognizers;                 //@synthesize activeGestureRecognizers=_activeGestureRecognizers - In the implementation block
@property (assign) long long flushCount;                                    //@synthesize flushCount=_flushCount - In the implementation block
-(void)dealloc;
-(id)init;
-(NSMutableSet *)touches;
-(void)preventFlushing;
-(void)allowFlushing;
-(id)gestureRecognizersForKey:(id)arg1 ;
-(void)removeGestureRecognizerFromAllKeys:(id)arg1 ;
-(void)updateActiveGestureRecognizers;
-(id)touchIdentitiesAssociatedWithGestureRecognizer:(id)arg1 ;
-(void)setTouches:(NSMutableSet *)arg1 ;
-(NSMutableSet *)cancelledTouches;
-(void)setCancelledTouches:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)cachedBeginTouches;
-(void)setCachedBeginTouches:(NSMutableDictionary *)arg1 ;
-(NSMutableSet *)claimedTouchIdentities;
-(void)setClaimedTouchIdentities:(NSMutableSet *)arg1 ;
-(NSMutableSet *)commandeeredTouchIdentities;
-(void)setCommandeeredTouchIdentities:(NSMutableSet *)arg1 ;
-(NSMutableSet *)activeGestureRecognizers;
-(void)setActiveGestureRecognizers:(NSMutableSet *)arg1 ;
-(long long)flushCount;
-(void)setFlushCount:(long long)arg1 ;
@end

