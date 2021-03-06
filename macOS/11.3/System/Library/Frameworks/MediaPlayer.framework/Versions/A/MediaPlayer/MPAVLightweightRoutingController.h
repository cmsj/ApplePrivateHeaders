/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPAVLightweightRoutingControllerDelegate;
@class AVOutputDeviceDiscoverySession, NSString, NSArray;

@interface MPAVLightweightRoutingController : NSObject {

	AVOutputDeviceDiscoverySession* _avDiscoverySession;
	long long _discoveryMode;
	NSString* _name;
	id<MPAVLightweightRoutingControllerDelegate> _delegate;

}

@property (assign,nonatomic) long long discoveryMode;                                                    //@synthesize discoveryMode=_discoveryMode - In the implementation block
@property (nonatomic,readonly) NSArray * pickedRoutes; 
@property (getter=isDevicePresenceDetected,nonatomic,readonly) char devicePresenceDetected; 
@property (nonatomic,copy,readonly) NSString * name;                                                     //@synthesize name=_name - In the implementation block
@property (assign,nonatomic,__weak) id<MPAVLightweightRoutingControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(id<MPAVLightweightRoutingControllerDelegate>)delegate;
-(void)setDelegate:(id<MPAVLightweightRoutingControllerDelegate>)arg1 ;
-(id)initWithName:(id)arg1 ;
-(long long)discoveryMode;
-(void)setDiscoveryMode:(long long)arg1 ;
-(void)_outputContextDevicesDidChangeNotification:(id)arg1 ;
-(void)_availableOutputDevicesDidChangeNotification:(id)arg1 ;
-(char)isDevicePresenceDetected;
-(NSArray *)pickedRoutes;
@end

