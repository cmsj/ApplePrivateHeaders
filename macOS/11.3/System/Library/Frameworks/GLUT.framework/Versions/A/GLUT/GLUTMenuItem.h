/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/GLUT.framework/Versions/A/GLUT
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, GLUTMenu;

@interface GLUTMenuItem : NSObject {

	NSString* _title;
	GLUTMenu* _submenu;
	int _tag;
	char _isTrigger;

}
-(void)finalize;
-(void)dealloc;
-(void)setTag:(int)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id)menu;
-(id)title;
-(int)tag;
-(void)setMenu:(id)arg1 ;
-(id)initWithTitle:(id)arg1 menu:(id)arg2 ;
-(id)initWithTitle:(id)arg1 tag:(int)arg2 ;
-(char)isTrigger;
@end

