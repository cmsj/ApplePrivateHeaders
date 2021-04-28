/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NURenderRequest.h>

@protocol NUScalePolicy;
@interface NUSubjectDetectionRequest : NURenderRequest {

	id<NUScalePolicy> _scalePolicy;

}

@property (nonatomic,retain) id<NUScalePolicy> scalePolicy;              //@synthesize scalePolicy=_scalePolicy - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithComposition:(id)arg1 ;
-(void)submit:(/*^block*/id)arg1 ;
-(id)newRenderJob;
-(long long)mediaComponentType;
-(id<NUScalePolicy>)scalePolicy;
-(id)submitGenericSynchronous:(out id*)arg1 ;
-(void)setScalePolicy:(id<NUScalePolicy>)arg1 ;
@end
