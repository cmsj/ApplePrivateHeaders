/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/Versions/A/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TITypologyRecord.h>

@class NSString, TIKeyboardLayout, NSArray;

@interface TITypologyRecordReplacements : TITypologyRecord {

	NSString* _string;
	TIKeyboardLayout* _keyLayout;
	NSArray* _candidates;

}

@property (nonatomic,copy) NSString * string;                           //@synthesize string=_string - In the implementation block
@property (nonatomic,retain) TIKeyboardLayout * keyLayout;              //@synthesize keyLayout=_keyLayout - In the implementation block
@property (nonatomic,retain) NSArray * candidates;                      //@synthesize candidates=_candidates - In the implementation block
+(char)supportsSecureCoding;
-(NSString *)string;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setString:(NSString *)arg1 ;
-(NSArray *)candidates;
-(id)shortDescription;
-(void)setCandidates:(NSArray *)arg1 ;
-(TIKeyboardLayout *)keyLayout;
-(void)setKeyLayout:(TIKeyboardLayout *)arg1 ;
-(void)applyToStatistic:(id)arg1 ;
@end

