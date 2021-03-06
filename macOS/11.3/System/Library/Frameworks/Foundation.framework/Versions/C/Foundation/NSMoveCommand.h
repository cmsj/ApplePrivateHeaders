/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSScriptCommand.h>

@class NSScriptObjectSpecifier;

@interface NSMoveCommand : NSScriptCommand {

	NSScriptObjectSpecifier* _keySpecifier;

}

@property (retain,readonly) NSScriptObjectSpecifier * keySpecifier; 
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setReceiversSpecifier:(id)arg1 ;
-(NSScriptObjectSpecifier *)keySpecifier;
-(id)performDefaultImplementation;
-(void)_moveObjectInContainer:(id)arg1 withKey:(id)arg2 atIndex:(long long)arg3 toContainer:(id)arg4 withKey:(id)arg5 atIndex:(long long*)arg6 replace:(char)arg7 ;
-(void)_moveObjectsInContainer:(id)arg1 toContainer:(id)arg2 withKey:(id)arg3 atIndex:(long long*)arg4 replace:(char)arg5 ;
@end

