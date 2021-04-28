/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@interface _NSPDFDocument : NSObject {

	CGPDFDocumentRef _document;
	CGRect _bounds;
	long long _currentPage;

}
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(CGRect)bounds;
-(long long)pageCount;
-(long long)currentPage;
-(CGPDFDocumentRef)documentRef;
-(void)setCurrentPage:(long long)arg1 ;
@end
