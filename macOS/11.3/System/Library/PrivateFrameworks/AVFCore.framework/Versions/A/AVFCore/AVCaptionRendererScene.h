/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVCaptionRendererSceneInternal;

@interface AVCaptionRendererScene : NSObject <NSCopying> {

	AVCaptionRendererSceneInternal* _internal;

}

@property (nonatomic,readonly) SCD_Struct_CM5 timeRange; 
@property (nonatomic,readonly) char hasActiveCaptions; 
@property (nonatomic,readonly) char needsPeriodicRefresh; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(SCD_Struct_CM5)timeRange;
-(id)initWithTimeRange:(SCD_Struct_CM5)arg1 hasActiveCaptions:(char)arg2 needsPeriodicRefresh:(char)arg3 ;
-(char)hasActiveCaptions;
-(char)needsPeriodicRefresh;
@end
