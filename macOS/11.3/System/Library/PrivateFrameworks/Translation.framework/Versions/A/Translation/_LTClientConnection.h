/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Versions/A/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_LTTranslationService.h>

@protocol _LTClientConnectionDelegate;
@class NSXPCConnection, _LTTranslationServer, NSString, NSUUID;

@interface _LTClientConnection : NSObject <_LTTranslationService> {

	NSXPCConnection* _connection;
	_LTTranslationServer* _server;
	NSString* _clientIdentifier;
	NSUUID* _speechSessionID;
	id<_LTClientConnectionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_LTClientConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<_LTClientConnectionDelegate>)delegate;
-(void)setDelegate:(id<_LTClientConnectionDelegate>)arg1 ;
-(void)cleanup;
-(void)clearCaches;
-(void)endAudio;
-(id)initWithConnection:(id)arg1 server:(id)arg2 ;
-(void)addSpeechAudioData:(id)arg1 ;
-(void)translateSentence:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)speak:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)installedLocales:(/*^block*/id)arg1 ;
-(void)startSpeechTranslationWithContext:(id)arg1 ;
-(void)startTextToSpeechTranslationWithContext:(id)arg1 text:(id)arg2 ;
-(void)configInfoForLocale:(id)arg1 otherLocale:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)translateParagraphs:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_offlineLanguageStatus:(/*^block*/id)arg1 ;
-(void)_downloadAssetForLanguagePair:(id)arg1 userInitiated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)_purgeAssetForLanguagePair:(id)arg1 userInitiated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)_purgeAllAssets:(/*^block*/id)arg1 ;
-(void)_updateAllAssets:(/*^block*/id)arg1 ;
-(void)_getAssetSize:(/*^block*/id)arg1 ;
-(void)availableLocalePairsForTask:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)additionalLikelyPreferredLocalesForLocale:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)task:(long long)arg1 isSupportedInCountry:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)languageForText:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)languagesForText:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)preheatWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)logWithRequestData:(id)arg1 ;
-(void)translate:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)provideFeedback:(id)arg1 withContext:(id)arg2 ;
-(void)startInstallRequest:(id)arg1 ;
-(void)cleanupOnDisconnect;
-(void)logRequestOfType:(id)arg1 context:(id)arg2 ;
-(id)_clientDelegate;
@end
