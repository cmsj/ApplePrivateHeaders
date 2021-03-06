/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/Versions/A/QuickLookThumbnailing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, FPSandboxingURLWrapper, NSData;

@interface QLThumbnailItem : NSObject <NSSecureCoding> {

	NSString* _fileExtensionToken;
	long long _fileExtensionHandle;
	NSURL* _url;
	FPSandboxingURLWrapper* _urlWrapperForExtension;
	FPSandboxingURLWrapper* _urlWrapperForParentDirectory;
	NSData* _data;
	NSString* _overriddenContentType;
	NSString* _computedContentType;
	unsigned long long _downloadStatus;
	char _needsAccessToExternalResources;

}

@property (nonatomic,readonly) unsigned long long itemType; 
@property (nonatomic,readonly) NSString * contentType; 
@property (readonly) NSURL * url;                                                        //@synthesize url=_url - In the implementation block
@property (readonly) FPSandboxingURLWrapper * urlWrapperForExtension;                    //@synthesize urlWrapperForExtension=_urlWrapperForExtension - In the implementation block
@property (readonly) FPSandboxingURLWrapper * urlWrapperForParentDirectory;              //@synthesize urlWrapperForParentDirectory=_urlWrapperForParentDirectory - In the implementation block
@property (readonly) NSData * data;                                                      //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) NSString * overriddenContentType;                             //@synthesize overriddenContentType=_overriddenContentType - In the implementation block
@property (assign) unsigned long long downloadStatus;                                    //@synthesize downloadStatus=_downloadStatus - In the implementation block
@property (copy) NSString * computedContentType;                                         //@synthesize computedContentType=_computedContentType - In the implementation block
@property (assign) char needsAccessToExternalResources;                                  //@synthesize needsAccessToExternalResources=_needsAccessToExternalResources - In the implementation block
+(char)supportsSecureCoding;
-(NSString *)contentType;
-(unsigned long long)itemType;
-(void)dealloc;
-(NSData *)data;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)url;
-(id)initWithData:(id)arg1 contentType:(id)arg2 ;
-(void)setOverriddenContentType:(NSString *)arg1 ;
-(NSString *)overriddenContentType;
-(char)needsAccessToExternalResources;
-(void)setNeedsAccessToExternalResources:(char)arg1 ;
-(id)initWithURL:(id)arg1 URLWrapperForExtension:(id)arg2 URLWrapperForParentDirectory:(id)arg3 ;
-(void)issueFileExtension;
-(FPSandboxingURLWrapper *)urlWrapperForExtension;
-(void)consumeFileExtension;
-(id)initWithURL:(id)arg1 URLWrapperForExtension:(id)arg2 ;
-(char)needsDownload;
-(NSString *)computedContentType;
-(void)setComputedContentType:(NSString *)arg1 ;
-(unsigned long long)downloadStatus;
-(void)setDownloadStatus:(unsigned long long)arg1 ;
-(FPSandboxingURLWrapper *)urlWrapperForParentDirectory;
@end

