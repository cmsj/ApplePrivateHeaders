/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/Versions/A/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountsDaemon/AccountsDaemon-Structs.h>
#import <libobjc.A.dylib/ACDPluginEntryProtocol.h>

@class NSSet, NSString, NSBundle;

@interface ACDPluginEntry : NSObject <ACDPluginEntryProtocol> {

	id _principalObject;
	NSSet* _supportedAccountTypes;
	NSSet* _supportedDataclasses;
	NSString* _identifier;
	struct {
		unsigned principalObject : 1;
		unsigned supportedAccountTypes : 1;
		unsigned supportedDataclasses : 1;
		unsigned identifier : 1;
	}  _fetchedFlags;
	NSBundle* _bundle;

}

@property (nonatomic,readonly) NSBundle * bundle;                          //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,readonly) id principalObject; 
@property (nonatomic,readonly) NSSet * supportedAccountTypes; 
@property (nonatomic,readonly) NSSet * supportedDataclasses; 
@property (nonatomic,readonly) NSString * identifier; 
-(id)description;
-(id)debugDescription;
-(id)init;
-(NSString *)identifier;
-(NSBundle *)bundle;
-(id)initWithBundle:(id)arg1 ;
-(NSSet *)supportedDataclasses;
-(char)principalObjectRespondsToSelector:(SEL)arg1 ;
-(id)principalObject;
-(NSSet *)supportedAccountTypes;
@end

