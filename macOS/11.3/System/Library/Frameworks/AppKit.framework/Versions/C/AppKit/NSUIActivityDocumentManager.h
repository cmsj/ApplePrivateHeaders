/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NSUIActivityDocumentManager : NSObject
+(id)sharedManager;
-(void)documentDidChangeFileURL:(id)arg1 ;
-(void)documentDidChangeFileType:(id)arg1 ;
-(void)documentDidOpen:(id)arg1 ;
-(void)documentDidClose:(id)arg1 ;
-(char)userActivityIsAutomaticForDocument:(id)arg1 ;
-(id)userActivityTypeForDocument:(id)arg1 ;
-(char)documentIsUbiquitous:(id)arg1 ;
-(void)updateAutomaticUserActivityForDocument:(id)arg1 ;
-(void)removeAutomaticUserActivityForDocument:(id)arg1 ;
@end
