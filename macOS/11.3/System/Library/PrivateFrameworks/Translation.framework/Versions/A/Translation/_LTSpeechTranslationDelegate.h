/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Versions/A/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _LTSpeechTranslationDelegate <NSObject>
@optional
-(void)cancel;
-(void)speechRecognitionResult:(id)arg1;
-(void)translatorDidTranslate:(id)arg1;
-(void)translationDidFinishWithError:(id)arg1;
-(void)languageDetectionResult:(id)arg1;
-(void)languageDetectionCompleted;
-(void)hybridEndpointerFoundEndpoint;
-(void)serverEndpointerFeatures:(id)arg1 locale:(id)arg2;
-(void)paragraphTranslation:(id)arg1 result:(id)arg2 error:(id)arg3;
-(void)languageInstallProgressed:(id)arg1 error:(id)arg2;

@end

