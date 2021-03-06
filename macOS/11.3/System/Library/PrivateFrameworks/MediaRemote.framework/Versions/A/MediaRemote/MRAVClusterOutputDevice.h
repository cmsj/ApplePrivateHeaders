/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRAVConcreteOutputDevice.h>

@class NSArray;

@interface MRAVClusterOutputDevice : MRAVConcreteOutputDevice {

	NSArray* _memberOutputDevices;

}

@property (nonatomic,readonly) NSArray * memberOutputDevices;              //@synthesize memberOutputDevices=_memberOutputDevices - In the implementation block
-(id)uid;
-(unsigned)deviceType;
-(id)groupID;
-(unsigned)deviceSubtype;
-(id)clusterComposition;
-(id)primaryID;
-(id)initWithPrimaryOutputDevice:(id)arg1 members:(id)arg2 sourceInfo:(id)arg3 ;
-(id)initWithDevices:(id)arg1 sourceInfo:(id)arg2 ;
-(NSArray *)memberOutputDevices;
@end

