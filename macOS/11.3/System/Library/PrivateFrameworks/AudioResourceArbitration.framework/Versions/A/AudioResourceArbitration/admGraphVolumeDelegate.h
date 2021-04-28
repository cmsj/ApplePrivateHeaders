/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioResourceArbitration.framework/Versions/A/AudioResourceArbitration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioResourceArbitration/AudioResourceArbitration-Structs.h>
#import <libobjc.A.dylib/dspd_GraphVolumeDelegate.h>

@class NSString;

@interface admGraphVolumeDelegate : NSObject <dspd_GraphVolumeDelegate> {

	shared_ptr<caulk::reactor<aura::adm::GraphVolume *>>* reactor_;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(error_code*)setWireVolume:(const Wire_Identifier*)arg1 level:(float)arg2 duration:(duration<long long, std::__1::ratio<1, 1000>>)arg3 ;
-(id)initWithReactor:(shared_ptr<caulk::reactor<aura::adm::GraphVolume *>>*)arg1 ;
@end
