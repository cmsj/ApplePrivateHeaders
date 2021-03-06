/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseAceObject.h>

@class NSData, SACFScriptEncryptionParameters, NSString, SACFScriptUrlInformation;

@interface SACFClientFlowScript : SABaseAceObject

@property (nonatomic,copy) NSData * compressedScript; 
@property (nonatomic,retain) SACFScriptEncryptionParameters * encryptionParameters; 
@property (nonatomic,copy) NSString * fileContentType; 
@property (nonatomic,copy) NSString * jsScript; 
@property (nonatomic,copy) NSData * jsScriptChecksum; 
@property (nonatomic,copy) NSString * jsScriptIdentifier; 
@property (assign,nonatomic) char shouldCacheScript; 
@property (assign,nonatomic) char shouldSkipExecution; 
@property (nonatomic,retain) SACFScriptUrlInformation * urlInformation; 
+(id)clientFlowScript;
+(id)clientFlowScriptWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSData *)compressedScript;
-(void)setCompressedScript:(NSData *)arg1 ;
-(SACFScriptEncryptionParameters *)encryptionParameters;
-(void)setEncryptionParameters:(SACFScriptEncryptionParameters *)arg1 ;
-(NSString *)fileContentType;
-(void)setFileContentType:(NSString *)arg1 ;
-(NSString *)jsScript;
-(void)setJsScript:(NSString *)arg1 ;
-(NSData *)jsScriptChecksum;
-(void)setJsScriptChecksum:(NSData *)arg1 ;
-(NSString *)jsScriptIdentifier;
-(void)setJsScriptIdentifier:(NSString *)arg1 ;
-(char)shouldCacheScript;
-(void)setShouldCacheScript:(char)arg1 ;
-(char)shouldSkipExecution;
-(void)setShouldSkipExecution:(char)arg1 ;
-(SACFScriptUrlInformation *)urlInformation;
-(void)setUrlInformation:(SACFScriptUrlInformation *)arg1 ;
@end

