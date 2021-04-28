/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/Versions/A/TextRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRTextRecognizerModel <NSObject,CRTextRecognizerModelInputProvider>
@property (assign,nonatomic) int* codemapArray; 
@property (assign,nonatomic) long long ctcBlankLabelIndex; 
@required
-(id)initWithConfiguration:(id)arg1 error:(id*)arg2;
-(int*)codemapArray;
-(id)predictFromInputs:(id)arg1 error:(id*)arg2;
-(void)setCodemapArray:(int*)arg1;
-(long long)ctcBlankLabelIndex;
-(void)setCtcBlankLabelIndex:(long long)arg1;

@end
