/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, MPAVBatteryLevel, NSArray, MPAVRouteConnection;

@interface MPAVRoute : NSObject <NSSecureCoding> {

	NSString* _routeName;
	char _picked;
	NSDictionary* _avRouteDescription;
	MPAVRoute* _wirelessDisplayRoute;
	long long _displayRouteType;
	MPAVBatteryLevel* _batteryLevel;
	char _canAccessRemoteAssets;
	char _canPlayEncryptedProgressiveDownloadAssets;
	char _canFetchMediaDataFromSender;
	char _presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
	char _pickedOnPairedDevice;
	char _playingOnPairedDevice;
	char _requiresPassword;
	char _carplayRoute;
	char _homePodRoute;
	char _b520Route;
	char _homeTheaterRoute;
	char _clusterRoute;
	NSString* _routeUID;
	NSString* _productIdentifier;
	NSString* _groupUID;
	long long _routeType;
	long long _pickableRouteType;
	long long _routeSubtype;
	NSArray* _clusterComposition;
	NSArray* _auxiliaryDevices;
	NSString* _playingPairedDeviceName;
	long long _clusterType;
	void* _externalDevice;
	long long _originalRouteSubtype;
	MPAVRouteConnection* _connection;

}

@property (getter=_externalDevice,nonatomic,readonly) void* externalDevice;                                       //@synthesize externalDevice=_externalDevice - In the implementation block
@property (nonatomic,readonly) char isSplitRoute; 
@property (nonatomic,readonly) long long numberOfOutputDevices; 
@property (nonatomic,copy) NSString * routeName; 
@property (assign,getter=isPicked,nonatomic) char picked; 
@property (getter=isRoutingToWirelessDevice,nonatomic,readonly) char routingToWirelessDevice; 
@property (nonatomic,readonly) NSDictionary * avRouteDescription; 
@property (nonatomic,retain) MPAVRoute * wirelessDisplayRoute; 
@property (assign,nonatomic) long long displayRouteType; 
@property (nonatomic,readonly) long long originalRouteSubtype;                                                    //@synthesize originalRouteSubtype=_originalRouteSubtype - In the implementation block
@property (nonatomic,readonly) MPAVRouteConnection * connection;                                                  //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) NSString * designatedGroupLeaderName; 
@property (nonatomic,readonly) NSArray * routeNames; 
@property (nonatomic,readonly) NSString * routeUID;                                                               //@synthesize routeUID=_routeUID - In the implementation block
@property (nonatomic,readonly) NSString * productIdentifier;                                                      //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * groupUID;                                                               //@synthesize groupUID=_groupUID - In the implementation block
@property (nonatomic,readonly) long long routeType;                                                               //@synthesize routeType=_routeType - In the implementation block
@property (nonatomic,readonly) long long pickableRouteType;                                                       //@synthesize pickableRouteType=_pickableRouteType - In the implementation block
@property (nonatomic,readonly) long long routeSubtype;                                                            //@synthesize routeSubtype=_routeSubtype - In the implementation block
@property (nonatomic,readonly) NSArray * clusterComposition;                                                      //@synthesize clusterComposition=_clusterComposition - In the implementation block
@property (nonatomic,readonly) char canAccessRemoteAssets;                                                        //@synthesize canAccessRemoteAssets=_canAccessRemoteAssets - In the implementation block
@property (nonatomic,readonly) char canPlayEncryptedProgressiveDownloadAssets;                                    //@synthesize canPlayEncryptedProgressiveDownloadAssets=_canPlayEncryptedProgressiveDownloadAssets - In the implementation block
@property (nonatomic,readonly) char canFetchMediaDataFromSender;                                                  //@synthesize canFetchMediaDataFromSender=_canFetchMediaDataFromSender - In the implementation block
@property (nonatomic,readonly) char presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;              //@synthesize presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets=_presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets - In the implementation block
@property (nonatomic,readonly) char isDeviceRoute; 
@property (getter=isProxyGroupPlayer,nonatomic,readonly) char proxyGroupPlayer; 
@property (getter=isVolumeControlAvailable,nonatomic,readonly) char volumeControlAvailable; 
@property (nonatomic,readonly) char supportsGrouping; 
@property (nonatomic,readonly) char supportsAirPlayGrouping; 
@property (nonatomic,readonly) char supportsRemoteControl; 
@property (getter=isSplitRoute,nonatomic,readonly) char splitRoute; 
@property (getter=isSplitterCapable,nonatomic,readonly) char splitterCapable; 
@property (nonatomic,readonly) MPAVBatteryLevel * batteryLevel;                                                   //@synthesize batteryLevel=_batteryLevel - In the implementation block
@property (nonatomic,readonly) NSArray * auxiliaryDevices;                                                        //@synthesize auxiliaryDevices=_auxiliaryDevices - In the implementation block
@property (nonatomic,readonly) NSString * playingPairedDeviceName;                                                //@synthesize playingPairedDeviceName=_playingPairedDeviceName - In the implementation block
@property (getter=isPickedOnPairedDevice,nonatomic,readonly) char pickedOnPairedDevice;                           //@synthesize pickedOnPairedDevice=_pickedOnPairedDevice - In the implementation block
@property (getter=isPlayingOnPairedDevice,nonatomic,readonly) char playingOnPairedDevice;                         //@synthesize playingOnPairedDevice=_playingOnPairedDevice - In the implementation block
@property (getter=isAirPlayingToDevice,nonatomic,readonly) char airPlayingToDevice; 
@property (nonatomic,readonly) NSString * groupLeaderAirplayIdentifier; 
@property (nonatomic,readonly) char requiresPassword;                                                             //@synthesize requiresPassword=_requiresPassword - In the implementation block
@property (nonatomic,readonly) char supportsWirelessDisplay; 
@property (nonatomic,readonly) long long passwordType; 
@property (getter=isDisplayedAsPicked,nonatomic,readonly) char displayAsPicked; 
@property (getter=isAirpodsRoute,nonatomic,readonly) char airpodsRoute; 
@property (getter=isAppleTVRoute,nonatomic,readonly) char appleTVRoute; 
@property (getter=isBeatsSoloRoute,nonatomic,readonly) char beatsSoloRoute; 
@property (getter=isBeatsStudioRoute,nonatomic,readonly) char beatsStudioRoute; 
@property (getter=isBeatsXRoute,nonatomic,readonly) char beatsXRoute; 
@property (getter=isCarplayRoute,nonatomic,readonly) char carplayRoute;                                           //@synthesize carplayRoute=_carplayRoute - In the implementation block
@property (getter=isDeviceSpeakerRoute,nonatomic,readonly) char deviceSpeakerRoute; 
@property (getter=isHearingDeviceRoute,nonatomic,readonly) char hearingDeviceRoute; 
@property (getter=isHomePodRoute,nonatomic,readonly) char homePodRoute;                                           //@synthesize homePodRoute=_homePodRoute - In the implementation block
@property (getter=isPowerbeatsRoute,nonatomic,readonly) char powerbeatsRoute; 
@property (getter=isSmartAudio,nonatomic,readonly) char smartAudio; 
@property (getter=isW1Route,nonatomic,readonly) char w1Route; 
@property (getter=isAirPlayRoute,nonatomic,readonly) char airPlayRoute; 
@property (getter=isW2Route,nonatomic,readonly) char w2Route; 
@property (getter=isH1Route,nonatomic,readonly) char h1Route; 
@property (getter=isShareableRoute,nonatomic,readonly) char shareableRoute; 
@property (getter=isHeadphonesRoute,nonatomic,readonly) char headphonesRoute; 
@property (getter=isStereoPair,nonatomic,readonly) char stereoPair; 
@property (getter=isTVRoute,nonatomic,readonly) char tvRoute; 
@property (getter=isTVStickRoute,nonatomic,readonly) char tvStickRoute; 
@property (getter=isSetTopBoxRoute,nonatomic,readonly) char setTopBoxRoute; 
@property (getter=isB444Route,nonatomic,readonly) char b444Route; 
@property (getter=isB298Route,nonatomic,readonly) char b298Route; 
@property (getter=isB419Route,nonatomic,readonly) char b419Route; 
@property (getter=isB364Route,nonatomic,readonly) char b364Route; 
@property (getter=isB372Route,nonatomic,readonly) char b372Route; 
@property (getter=isB515Route,nonatomic,readonly) char b515Route; 
@property (getter=isB520Route,nonatomic,readonly) char b520Route;                                                 //@synthesize b520Route=_b520Route - In the implementation block
@property (getter=isHomeTheaterRoute,nonatomic,readonly) char homeTheaterRoute;                                   //@synthesize homeTheaterRoute=_homeTheaterRoute - In the implementation block
@property (getter=isLowLatencyRoute,nonatomic,readonly) char lowLatencyRoute; 
@property (getter=isClusterRoute,nonatomic,readonly) char clusterRoute;                                           //@synthesize clusterRoute=_clusterRoute - In the implementation block
@property (nonatomic,readonly) long long clusterType;                                                             //@synthesize clusterType=_clusterType - In the implementation block
+(char)supportsSecureCoding;
+(long long)routeSubtypeForMRSubtype:(unsigned)arg1 withOverridesFromMRType:(unsigned)arg2 ;
+(long long)routeSubtypeForMRSubtype:(unsigned)arg1 mrType:(unsigned)arg2 ;
+(id)clusterCompositionForOutputDevice:(id)arg1 ;
+(long long)clusterTypeForMRClusterType:(unsigned)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(MPAVRouteConnection *)connection;
-(NSString *)productIdentifier;
-(long long)routeType;
-(long long)clusterType;
-(NSArray *)routeNames;
-(NSString *)routeName;
-(void)setRouteName:(NSString *)arg1 ;
-(MPAVBatteryLevel *)batteryLevel;
-(char)canAccessRemoteAssets;
-(char)canPlayEncryptedProgressiveDownloadAssets;
-(char)canFetchMediaDataFromSender;
-(char)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
-(long long)passwordType;
-(void*)_externalDevice;
-(NSArray *)clusterComposition;
-(char)isProxyGroupPlayer;
-(char)isVolumeControlAvailable;
-(NSString *)playingPairedDeviceName;
-(char)isPickedOnPairedDevice;
-(NSString *)groupUID;
-(char)supportsGrouping;
-(NSString *)routeUID;
-(long long)routeSubtype;
-(NSString *)designatedGroupLeaderName;
-(NSDictionary *)avRouteDescription;
-(void)setAVRouteDescription:(id)arg1 ;
-(char)isAirPlayingToDevice;
-(NSString *)groupLeaderAirplayIdentifier;
-(char)isAppleTVRoute;
-(char)isDeviceRoute;
-(char)supportsAirPlayGrouping;
-(char)supportsRemoteControl;
-(char)isSplitterCapable;
-(char)isSplitRoute;
-(long long)numberOfOutputDevices;
-(char)isPicked;
-(void)setPicked:(char)arg1 ;
-(char)isRoutingToWirelessDevice;
-(MPAVRoute *)wirelessDisplayRoute;
-(void)setWirelessDisplayRoute:(MPAVRoute *)arg1 ;
-(char)isDisplayedAsPicked;
-(long long)displayRouteType;
-(void)setDisplayRouteType:(long long)arg1 ;
-(char)isShareableRoute;
-(char)isHeadphonesRoute;
-(char)isAirpodsRoute;
-(char)isB298Route;
-(char)isB372Route;
-(char)isPowerbeatsRoute;
-(char)isBeatsSoloRoute;
-(char)isBeatsStudioRoute;
-(char)isBeatsXRoute;
-(char)isDeviceSpeakerRoute;
-(char)isHearingDeviceRoute;
-(char)isSmartAudio;
-(char)isStereoPair;
-(char)isTVRoute;
-(char)isTVStickRoute;
-(char)isSetTopBoxRoute;
-(char)isW1Route;
-(char)isAirPlayRoute;
-(char)isH1Route;
-(char)isW2Route;
-(char)isB444Route;
-(char)isB419Route;
-(char)isB364Route;
-(char)isB515Route;
-(char)isLowLatencyRoute;
-(char)supportsWirelessDisplay;
-(char)containsDeviceWithSubtype:(long long)arg1 ;
-(long long)pickableRouteType;
-(NSArray *)auxiliaryDevices;
-(char)isPlayingOnPairedDevice;
-(char)requiresPassword;
-(char)isCarplayRoute;
-(char)isHomePodRoute;
-(char)isB520Route;
-(char)isHomeTheaterRoute;
-(char)isClusterRoute;
-(long long)originalRouteSubtype;
@end

