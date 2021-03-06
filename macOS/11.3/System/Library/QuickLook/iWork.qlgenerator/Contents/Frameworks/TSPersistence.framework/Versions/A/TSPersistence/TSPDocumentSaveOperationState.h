/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPSaveOperationState.h>

@class NSURL, NSProgress, TSPDocumentProperties, TSPDocumentRevision, TSPObject, SFUCryptoKey, NSData, NSString, TSPPackageWriter, NSUUID;

@interface TSPDocumentSaveOperationState : TSPSaveOperationState {

	char _didResetDocumentRevision;
	char _shouldResumeAsynchronousModifications;
	char _didEndWriteOperation;
	char _shouldLeavePendingEndSave;
	NSURL* _URL;
	long long _packageType;
	NSURL* _relativeURLForExternalData;
	NSProgress* _progress;
	TSPDocumentProperties* _documentProperties;
	TSPDocumentProperties* _documentSupportProperties;
	TSPDocumentRevision* _documentRevision;
	unsigned long long _saveToken;
	TSPObject* _documentObject;
	TSPObject* _supportObject;
	NSURL* _originalDocumentURL;
	NSURL* _originalSupportURL;
	SFUCryptoKey* _encryptionKey;
	NSData* _passwordVerifier;
	NSString* _documentPasswordHint;
	TSPPackageWriter* _documentPackageWriter;
	TSPPackageWriter* _supportPackageWriter;
	NSUUID* _documentUUID;

}

@property (nonatomic,readonly) NSURL * URL;                                                  //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) long long packageType;                                        //@synthesize packageType=_packageType - In the implementation block
@property (nonatomic,copy) NSURL * relativeURLForExternalData;                               //@synthesize relativeURLForExternalData=_relativeURLForExternalData - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                                          //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) TSPDocumentProperties * documentProperties;                     //@synthesize documentProperties=_documentProperties - In the implementation block
@property (nonatomic,retain) TSPDocumentProperties * documentSupportProperties;              //@synthesize documentSupportProperties=_documentSupportProperties - In the implementation block
@property (nonatomic,retain) TSPDocumentRevision * documentRevision;                         //@synthesize documentRevision=_documentRevision - In the implementation block
@property (assign,nonatomic) char didResetDocumentRevision;                                  //@synthesize didResetDocumentRevision=_didResetDocumentRevision - In the implementation block
@property (assign,nonatomic) unsigned long long saveToken;                                   //@synthesize saveToken=_saveToken - In the implementation block
@property (nonatomic,retain) TSPObject * documentObject;                                     //@synthesize documentObject=_documentObject - In the implementation block
@property (nonatomic,retain) TSPObject * supportObject;                                      //@synthesize supportObject=_supportObject - In the implementation block
@property (nonatomic,copy) NSURL * originalDocumentURL;                                      //@synthesize originalDocumentURL=_originalDocumentURL - In the implementation block
@property (nonatomic,copy) NSURL * originalSupportURL;                                       //@synthesize originalSupportURL=_originalSupportURL - In the implementation block
@property (nonatomic,retain) SFUCryptoKey * encryptionKey;                                   //@synthesize encryptionKey=_encryptionKey - In the implementation block
@property (nonatomic,retain) NSData * passwordVerifier;                                      //@synthesize passwordVerifier=_passwordVerifier - In the implementation block
@property (nonatomic,copy) NSString * documentPasswordHint;                                  //@synthesize documentPasswordHint=_documentPasswordHint - In the implementation block
@property (nonatomic,retain) TSPPackageWriter * documentPackageWriter;                       //@synthesize documentPackageWriter=_documentPackageWriter - In the implementation block
@property (nonatomic,retain) TSPPackageWriter * supportPackageWriter;                        //@synthesize supportPackageWriter=_supportPackageWriter - In the implementation block
@property (nonatomic,copy) NSUUID * documentUUID;                                            //@synthesize documentUUID=_documentUUID - In the implementation block
@property (assign,nonatomic) char shouldResumeAsynchronousModifications;                     //@synthesize shouldResumeAsynchronousModifications=_shouldResumeAsynchronousModifications - In the implementation block
@property (assign,nonatomic) char didEndWriteOperation;                                      //@synthesize didEndWriteOperation=_didEndWriteOperation - In the implementation block
@property (assign,nonatomic) char shouldLeavePendingEndSave;                                 //@synthesize shouldLeavePendingEndSave=_shouldLeavePendingEndSave - In the implementation block
-(id)init;
-(NSURL *)URL;
-(NSProgress *)progress;
-(NSURL *)originalDocumentURL;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)setEncryptionKey:(SFUCryptoKey *)arg1 ;
-(SFUCryptoKey *)encryptionKey;
-(void)setDocumentObject:(TSPObject *)arg1 ;
-(NSString *)documentPasswordHint;
-(void)setDocumentPasswordHint:(NSString *)arg1 ;
-(TSPObject *)documentObject;
-(NSData *)passwordVerifier;
-(void)setPasswordVerifier:(NSData *)arg1 ;
-(NSUUID *)documentUUID;
-(TSPObject *)supportObject;
-(void)setSupportObject:(TSPObject *)arg1 ;
-(void)setDocumentRevision:(TSPDocumentRevision *)arg1 ;
-(TSPDocumentRevision *)documentRevision;
-(TSPDocumentProperties *)documentProperties;
-(id)initWithURL:(id)arg1 updateType:(long long)arg2 packageType:(long long)arg3 ;
-(void)setDocumentUUID:(NSUUID *)arg1 ;
-(long long)packageType;
-(void)setRelativeURLForExternalData:(NSURL *)arg1 ;
-(void)setShouldResumeAsynchronousModifications:(char)arg1 ;
-(void)setOriginalDocumentURL:(NSURL *)arg1 ;
-(void)setDidResetDocumentRevision:(char)arg1 ;
-(void)setSaveToken:(unsigned long long)arg1 ;
-(void)setDocumentProperties:(TSPDocumentProperties *)arg1 ;
-(void)setDocumentSupportProperties:(TSPDocumentProperties *)arg1 ;
-(unsigned long long)saveToken;
-(void)setOriginalSupportURL:(NSURL *)arg1 ;
-(NSURL *)originalSupportURL;
-(NSURL *)relativeURLForExternalData;
-(void)setDocumentPackageWriter:(TSPPackageWriter *)arg1 ;
-(TSPDocumentProperties *)documentSupportProperties;
-(void)setSupportPackageWriter:(TSPPackageWriter *)arg1 ;
-(TSPPackageWriter *)documentPackageWriter;
-(char)didEndWriteOperation;
-(void)setDidEndWriteOperation:(char)arg1 ;
-(char)shouldResumeAsynchronousModifications;
-(void)setShouldLeavePendingEndSave:(char)arg1 ;
-(TSPPackageWriter *)supportPackageWriter;
-(char)didResetDocumentRevision;
-(char)shouldLeavePendingEndSave;
@end

