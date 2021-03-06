/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/GLUT.framework/Versions/A/GLUT
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMenu;

@interface GLUTMenu : NSObject {

	NSMutableArray* _menuItems;
	NSMenu* _nativeMenu;
	/*function pointer*/void* _selectFunc;
	/*function pointer*/void* _fselectFunc;
	int _menuid;
	GLUTMenu* _parentMenu;

}
-(void)finalize;
-(void)dealloc;
-(int)numberOfItems;
-(void)setParentMenu:(id)arg1 ;
-(id)nativeMenu;
-(void)_removeSubmenu:(id)arg1 ;
-(void)menuItemAction:(id)arg1 ;
-(id)_buildMenu;
-(void)_invalidateMenuCache;
-(id)initWithCallback:(/*function pointer*/void*)arg1 menuID:(int)arg2 ;
-(int)menuID;
-(void)addMenuItemWithTitle:(id)arg1 tag:(int)arg2 ;
-(void)addSubMenuWithTitle:(id)arg1 menu:(id)arg2 ;
-(void)setMenuItemAtIndex:(int)arg1 toTitle:(id)arg2 tag:(int)arg3 ;
-(void)setMenuItemAtIndex:(int)arg1 toTitle:(id)arg2 menu:(id)arg3 ;
-(void)removeMenuItemAtIndex:(int)arg1 ;
-(void)setFortranCallback:(void*)arg1 ;
-(void*)getFortranCallback;
@end

