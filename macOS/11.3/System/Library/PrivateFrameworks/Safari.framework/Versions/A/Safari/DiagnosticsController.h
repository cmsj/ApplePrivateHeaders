/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class DiagCollectionClient, NSString, NSNumber, NSMutableDictionary;

@interface DiagnosticsController : NSObject {

	DiagCollectionClient* deCollector;
	NSString* _autoBugCapturePath;
	NSNumber* _autoBugCaptureGID;
	NSNumber* _autoBugCaptureUID;
	NSMutableDictionary* _actionsDict;
	NSMutableDictionary* _settingsDict;

}

@property (nonatomic,retain) NSMutableDictionary * actionsDict;               //@synthesize actionsDict=_actionsDict - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * settingsDict;              //@synthesize settingsDict=_settingsDict - In the implementation block
@property (nonatomic,retain) NSString * autoBugCapturePath;                   //@synthesize autoBugCapturePath=_autoBugCapturePath - In the implementation block
@property (nonatomic,retain) NSNumber * autoBugCaptureGID;                    //@synthesize autoBugCaptureGID=_autoBugCaptureGID - In the implementation block
@property (nonatomic,retain) NSNumber * autoBugCaptureUID;                    //@synthesize autoBugCaptureUID=_autoBugCaptureUID - In the implementation block
+(void)initialize;
+(id)loggingStateCache;
-(void)dealloc;
-(id)initWithConfiguration:(id)arg1 ;
-(void)configureWithDiagnosticActions:(id)arg1 ;
-(char)validateDiagnosticsConfiguration:(id)arg1 ;
-(char)validateActionsDictionary:(id)arg1 ;
-(char)validateSettingsDictionary:(id)arg1 ;
-(char)validateActionsDictionaryContent:(id)arg1 identifier:(id)arg2 ;
-(char)validateSettingsNodeDictionary:(id)arg1 identifier:(id)arg2 isDefault:(char)arg3 ;
-(char)validateSettingsNodeContents:(id)arg1 identifier:(id)arg2 ;
-(NSMutableDictionary *)actionsDict;
-(id)diagActionsForSignature:(id)arg1 commonActions:(id)arg2 ;
-(NSMutableDictionary *)settingsDict;
-(id)consolidatedLogLevelSetsFromActions:(id)arg1 ;
-(void)consolidateLoggingLevelsIntoSet:(id)arg1 withCurrentState:(id)arg2 ;
-(void)applyLogLevelSets:(id)arg1 ;
-(void)applyLogLevel:(id)arg1 forIdentifier:(id)arg2 logSettingType:(unsigned long long)arg3 ;
-(char)_loadLoggingSupport;
-(char)validateOSLogPreferencesProtocol:(id)arg1 ;
-(id)diagActionsForSignature:(id)arg1 ;
-(void)raiseLoggingForActions:(id)arg1 identifier:(id)arg2 ;
-(void)lowerLoggingForIdentifier:(id)arg1 ;
-(id)diagnosticExtensionsForDiagnosticCase:(id)arg1 enableCommonActions:(id)arg2 ;
-(id)diagExtensionCollector;
-(id)defaultsDictionaryWithAlwaysRunActions:(id)arg1 ;
-(id)actionsDictionaryForProcess:(id)arg1 logLevel:(id)arg2 diagnosticExtensions:(id)arg3 ;
-(void)raiseLoggingForDiagnosticCase:(id)arg1 ;
-(void)lowerLoggingForDiagnosticCase:(id)arg1 ;
-(unsigned long long)collectDignosticExtensionFilesForDiagnosticCase:(id)arg1 parameters:(id)arg2 options:(id)arg3 queue:(id)arg4 reply:(/*^block*/id)arg5 ;
-(NSString *)autoBugCapturePath;
-(void)setAutoBugCapturePath:(NSString *)arg1 ;
-(NSNumber *)autoBugCaptureGID;
-(void)setAutoBugCaptureGID:(NSNumber *)arg1 ;
-(NSNumber *)autoBugCaptureUID;
-(void)setAutoBugCaptureUID:(NSNumber *)arg1 ;
-(void)setActionsDict:(NSMutableDictionary *)arg1 ;
-(void)setSettingsDict:(NSMutableDictionary *)arg1 ;
@end

