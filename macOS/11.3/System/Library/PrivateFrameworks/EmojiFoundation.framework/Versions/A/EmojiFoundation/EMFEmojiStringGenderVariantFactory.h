/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmojiFoundation.framework/Versions/A/EmojiFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface EMFEmojiStringGenderVariantFactory : NSObject {

	int _gender;
	NSString* _sourceString;

}

@property (nonatomic,readonly) int gender;                       //@synthesize gender=_gender - In the implementation block
@property (nonatomic,copy) NSString * sourceString;              //@synthesize sourceString=_sourceString - In the implementation block
-(int)gender;
-(NSString *)sourceString;
-(id)initWithSourceString:(id)arg1 gender:(int)arg2 ;
-(id)stringForGenderVariant:(int)arg1 ;
-(void)setSourceString:(NSString *)arg1 ;
@end

