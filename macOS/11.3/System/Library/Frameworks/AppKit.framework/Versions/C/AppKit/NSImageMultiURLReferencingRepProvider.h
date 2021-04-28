/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <libobjc.A.dylib/NSImageRepProvider.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface NSImageMultiURLReferencingRepProvider : NSObject <NSImageRepProvider, NSCopying> {

	NSArray* _urls;
	NSArray* _representations;

}

@property (readonly) NSArray * urls;                                //@synthesize urls=_urls - In the implementation block
@property (readonly) char _isSymbolImage; 
@property (readonly) CGSize defaultSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id)allRepresentationsForImage:(id)arg1 ;
-(id)initWithURLs:(id)arg1 ;
-(NSArray *)urls;
@end
