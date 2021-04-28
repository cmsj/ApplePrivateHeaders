/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IntentsFoundation.framework/Versions/A/IntentsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IntentsFoundation/IntentsFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface INFVariantsDescriptor : NSObject <NSCopying> {

	unsigned long long _plurality;
	unsigned long long _gender;

}

@property (assign,nonatomic) unsigned long long plurality;              //@synthesize plurality=_plurality - In the implementation block
@property (assign,nonatomic) unsigned long long gender;                 //@synthesize gender=_gender - In the implementation block
@property (nonatomic,readonly) NSString * dictionaryKey; 
+(id)variant;
+(id)variantWithVariants:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)init;
-(unsigned long long)gender;
-(void)setGender:(unsigned long long)arg1 ;
-(unsigned long long)plurality;
-(NSString *)dictionaryKey;
-(id)append:(id)arg1 toString:(id)arg2 ;
-(id)initWithVariants:(unsigned long long)arg1 ;
-(id)variantByRemovingOneAttribute;
-(void)setPlurality:(unsigned long long)arg1 ;
@end
