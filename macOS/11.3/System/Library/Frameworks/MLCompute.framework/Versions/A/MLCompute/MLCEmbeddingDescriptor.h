/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MLCompute.framework/Versions/A/MLCompute
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MLCompute/MLCompute-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber;

@interface MLCEmbeddingDescriptor : NSObject <NSCopying> {

	char _scalesGradientByFrequency;
	NSNumber* _embeddingCount;
	NSNumber* _embeddingDimension;
	NSNumber* _paddingIndex;
	NSNumber* _maximumNorm;
	NSNumber* _pNorm;

}

@property (nonatomic,readonly) NSNumber * embeddingCount;                   //@synthesize embeddingCount=_embeddingCount - In the implementation block
@property (nonatomic,readonly) NSNumber * embeddingDimension;               //@synthesize embeddingDimension=_embeddingDimension - In the implementation block
@property (nonatomic,readonly) NSNumber * paddingIndex;                     //@synthesize paddingIndex=_paddingIndex - In the implementation block
@property (nonatomic,readonly) NSNumber * maximumNorm;                      //@synthesize maximumNorm=_maximumNorm - In the implementation block
@property (nonatomic,readonly) NSNumber * pNorm;                            //@synthesize pNorm=_pNorm - In the implementation block
@property (nonatomic,readonly) char scalesGradientByFrequency;              //@synthesize scalesGradientByFrequency=_scalesGradientByFrequency - In the implementation block
+(id)descriptorWithEmbeddingCount:(id)arg1 embeddingDimension:(id)arg2 paddingIndex:(id)arg3 maximumNorm:(id)arg4 pNorm:(id)arg5 scalesGradientByFrequency:(char)arg6 ;
+(id)descriptorWithEmbeddingCount:(id)arg1 embeddingDimension:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSNumber *)embeddingDimension;
-(NSNumber *)paddingIndex;
-(NSNumber *)maximumNorm;
-(NSNumber *)pNorm;
-(char)scalesGradientByFrequency;
-(NSNumber *)embeddingCount;
-(id)initWithEmbeddingCount:(id)arg1 embeddingDimension:(id)arg2 paddingIndex:(id)arg3 maximumNorm:(id)arg4 pNorm:(id)arg5 scalesGradientByFrequency:(char)arg6 ;
@end
