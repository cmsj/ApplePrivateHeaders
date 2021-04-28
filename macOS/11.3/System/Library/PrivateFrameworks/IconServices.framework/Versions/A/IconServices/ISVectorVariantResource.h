/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/Versions/A/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IconServices/IconServices-Structs.h>
#import <libobjc.A.dylib/ISVariantResourceProtocol.h>

@class NSString, NSURL;

@interface ISVectorVariantResource : NSObject <ISVariantResourceProtocol> {

	NSString* _variantName;
	unsigned long long _flags;
	CGPDFDocumentRef _pdfDocument;
	NSURL* _URL;

}

@property (retain) NSURL * URL;                                     //@synthesize URL=_URL - In the implementation block
@property (readonly) CGPDFDocumentRef pdfDocument;                  //@synthesize pdfDocument=_pdfDocument - In the implementation block
@property (readonly) NSString * variantName;                        //@synthesize variantName=_variantName - In the implementation block
@property (readonly) unsigned long long flags;                      //@synthesize flags=_flags - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)resourceWithURL:(id)arg1 resourceInfo:(id)arg2 ;
-(id)initWithURL:(id)arg1 variantName:(id)arg2 flags:(unsigned long long)arg3 ;
-(CGImageRef)imageForSize:(unsigned long long)arg1 scale:(unsigned long long)arg2 error:(id*)arg3 ;
-(unsigned long long)flags;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(CGPDFDocumentRef)pdfDocument;
-(NSString *)variantName;
@end
