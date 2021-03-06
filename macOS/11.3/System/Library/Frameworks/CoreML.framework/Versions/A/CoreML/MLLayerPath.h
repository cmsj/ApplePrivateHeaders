/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreML.framework/Versions/A/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface MLLayerPath : NSObject <NSCopying> {

	NSArray* _scopedModelNames;
	NSString* _layerName;

}

@property (nonatomic,copy) NSString * layerName;                    //@synthesize layerName=_layerName - In the implementation block
@property (nonatomic,copy) NSArray * scopedModelNames;              //@synthesize scopedModelNames=_scopedModelNames - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(NSString *)layerName;
-(void)setLayerName:(NSString *)arg1 ;
-(id)initWithScopedModelAndLayerName:(id)arg1 layerName:(id)arg2 ;
-(void)appendPathComponent:(id)arg1 ;
-(char)isEqualToMLLayerPath:(id)arg1 ;
-(NSArray *)scopedModelNames;
-(void)setScopedModelNames:(NSArray *)arg1 ;
@end

