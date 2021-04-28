/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MailCore.framework/Versions/A/MailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MailCore/MailCore-Structs.h>
@class NSArray;

@interface MCMessageGenerator : NSObject {

	SecIdentityRef _signingIdentity;
	char _shouldMarkNonresizableAttachmentData;
	char _createsMimeAlternatives;
	char _createsPlainTextOnly;
	char _alwaysCreatesRichText;
	char _allows8BitMimeParts;
	char _allowsBinaryMimeParts;
	char _allowsAppleDoubleAttachments;
	unsigned long long _encodingHint;
	NSArray* _encryptionCertificates;

}

@property (assign,nonatomic) unsigned long long encodingHint;                //@synthesize encodingHint=_encodingHint - In the implementation block
@property (assign,nonatomic) char createsMimeAlternatives;                   //@synthesize createsMimeAlternatives=_createsMimeAlternatives - In the implementation block
@property (assign,nonatomic) char createsPlainTextOnly;                      //@synthesize createsPlainTextOnly=_createsPlainTextOnly - In the implementation block
@property (assign,nonatomic) char alwaysCreatesRichText;                     //@synthesize alwaysCreatesRichText=_alwaysCreatesRichText - In the implementation block
@property (assign,nonatomic) char allows8BitMimeParts;                       //@synthesize allows8BitMimeParts=_allows8BitMimeParts - In the implementation block
@property (assign,nonatomic) char allowsBinaryMimeParts;                     //@synthesize allowsBinaryMimeParts=_allowsBinaryMimeParts - In the implementation block
@property (assign,nonatomic) char allowsAppleDoubleAttachments;              //@synthesize allowsAppleDoubleAttachments=_allowsAppleDoubleAttachments - In the implementation block
@property (nonatomic,copy) NSArray * encryptionCertificates;                 //@synthesize encryptionCertificates=_encryptionCertificates - In the implementation block
+(id)domainHintForResentIDFromHeaders:(id)arg1 hasResentFromHeaders:(char*)arg2 ;
-(void)dealloc;
-(id)init;
-(NSArray *)encryptionCertificates;
-(void)setEncodingHint:(unsigned long long)arg1 ;
-(void)setCreatesPlainTextOnly:(char)arg1 ;
-(void)setAlwaysCreatesRichText:(char)arg1 ;
-(id)newMessageWithAttributedString:(id)arg1 headers:(id)arg2 ;
-(id)newMessageWithHtmlString:(id)arg1 plainTextAlternative:(id)arg2 otherHtmlStringsAndAttachments:(id)arg3 headers:(id)arg4 ;
-(char)appendDataForMimePart:(id)arg1 toData:(id)arg2 withPartData:(id)arg3 ;
-(void)setEncryptionCertificates:(NSArray *)arg1 ;
-(id)newMessageWithBodyData:(id)arg1 headers:(id)arg2 ;
-(void)setCreatesMimeAlternatives:(char)arg1 ;
-(void)setAllowsAppleDoubleAttachments:(char)arg1 ;
-(id)_newPartAndDataForHTMLStringAndMIMECharset:(id)arg1 partData:(id)arg2 ;
-(id)_newMimePartWithWebResource:(id)arg1 partData:(id)arg2 seenURLStrings:(id)arg3 ;
-(void)_recursivelyAddSubresourcesFromArchive:(id)arg1 toArray:(id)arg2 ;
-(id)_newPartForAttachment:(id)arg1 partData:(id)arg2 ;
-(id)_newPlainTextPartWithAttributedString:(id)arg1 partData:(id)arg2 ;
-(id)_newOutgoingMessageFromTopLevelMimePart:(id)arg1 topLevelHeaders:(id)arg2 withPartData:(id)arg3 ;
-(char)createsPlainTextOnly;
-(char)alwaysCreatesRichText;
-(id)_newMimePartWithAttributedString:(id)arg1 partData:(id)arg2 outputRich:(char)arg3 ;
-(id)newMessageByRemovingAttachmentsFromMessage:(id)arg1 ;
-(id)_newPartAndDataForString:(id)arg1 charset:(id)arg2 subtype:(id)arg3 partData:(id)arg4 ;
-(id)_newDataForMimePart:(id)arg1 withPartData:(id)arg2 ;
-(id)_encryptionCertificatesForRecipients:(id)arg1 ;
-(char)_encodeDataForMimePart:(id)arg1 withPartData:(id)arg2 ;
-(void)_appendHeadersForMimePart:(id)arg1 toHeaders:(id)arg2 ;
-(char)allowsBinaryMimeParts;
-(char)createsMimeAlternatives;
-(unsigned long long)encodingHint;
-(void)_setMimeTypeFromAttachment:(id)arg1 onMimePart:(id)arg2 filename:(id*)arg3 ;
-(id)_newPartForDirectoryAttachment:(id)arg1 partData:(id)arg2 ;
-(char)allowsAppleDoubleAttachments;
-(id)_hfsFilenameDataWithFilename:(id)arg1 partData:(id)arg2 ;
-(id)_newRFC2047NameParameterDataForMimePart:(id)arg1 ;
-(char)allows8BitMimeParts;
-(void)setShouldMarkNonresizableAttachmentData:(char)arg1 ;
-(void)setSigningIdentity:(SecIdentityRef)arg1 ;
-(id)newDataForAttributedString:(id)arg1 ;
-(void)setAllows8BitMimeParts:(char)arg1 ;
-(void)setAllowsBinaryMimeParts:(char)arg1 ;
@end
