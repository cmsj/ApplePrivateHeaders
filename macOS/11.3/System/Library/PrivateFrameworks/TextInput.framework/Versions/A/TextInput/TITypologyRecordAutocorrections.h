/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/Versions/A/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TITypologyRecord.h>

@class TIKeyboardState, TICandidateRequestToken, TIAutocorrectionList;

@interface TITypologyRecordAutocorrections : TITypologyRecord {

	char _listUIDisplayed;
	TIKeyboardState* _keyboardState;
	TICandidateRequestToken* _requestToken;
	TIAutocorrectionList* _autocorrections;

}

@property (nonatomic,retain) TIKeyboardState * keyboardState;                     //@synthesize keyboardState=_keyboardState - In the implementation block
@property (nonatomic,retain) TICandidateRequestToken * requestToken;              //@synthesize requestToken=_requestToken - In the implementation block
@property (nonatomic,retain) TIAutocorrectionList * autocorrections;              //@synthesize autocorrections=_autocorrections - In the implementation block
@property (assign,nonatomic) char listUIDisplayed;                                //@synthesize listUIDisplayed=_listUIDisplayed - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)shortDescription;
-(void)setRequestToken:(TICandidateRequestToken *)arg1 ;
-(TICandidateRequestToken *)requestToken;
-(id)currentKeyboardState;
-(void)removeContextFromKeyboardState;
-(void)replaceDocumentState:(id)arg1 ;
-(TIKeyboardState *)keyboardState;
-(void)setKeyboardState:(TIKeyboardState *)arg1 ;
-(TIAutocorrectionList *)autocorrections;
-(void)setAutocorrections:(TIAutocorrectionList *)arg1 ;
-(char)listUIDisplayed;
-(void)setListUIDisplayed:(char)arg1 ;
-(void)applyToStatistic:(id)arg1 ;
@end

