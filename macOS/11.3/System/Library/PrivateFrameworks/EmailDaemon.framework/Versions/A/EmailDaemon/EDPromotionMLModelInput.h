/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/Versions/A/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSDictionary, NSSet;

@interface EDPromotionMLModelInput : NSObject <MLFeatureProvider> {

	NSDictionary* _header_key_filtered;
	double _to_count;

}

@property (nonatomic,retain) NSDictionary * header_key_filtered;              //@synthesize header_key_filtered=_header_key_filtered - In the implementation block
@property (assign,nonatomic) double to_count;                                 //@synthesize to_count=_to_count - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(id)initWithHeader_key_filtered:(id)arg1 to_count:(double)arg2 ;
-(NSDictionary *)header_key_filtered;
-(void)setHeader_key_filtered:(NSDictionary *)arg1 ;
-(double)to_count;
-(void)setTo_count:(double)arg1 ;
@end

