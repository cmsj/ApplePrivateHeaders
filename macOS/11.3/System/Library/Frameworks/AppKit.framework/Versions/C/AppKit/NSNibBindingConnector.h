/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSNibConnector.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSDictionary;

@interface NSNibBindingConnector : NSNibConnector <NSCoding> {

	NSString* _binding;
	NSString* _keyPath;
	NSDictionary* _options;
	struct {
		unsigned _hasEstablishedConnection : 1;
		unsigned _reservedNibBindingConnector : 31;
	}  _nibBindingConnectorFlags;
	NSNibBindingConnector* _previousConnector;

}
+(void)initialize;
-(void)dealloc;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)replaceObject:(id)arg1 withObject:(id)arg2 ;
-(void)setOptions:(id)arg1 ;
-(id)options;
-(id)binding;
-(id)keyPath;
-(void)setKeyPath:(id)arg1 ;
-(void)establishConnection;
-(void)instantiateWithObjectInstantiator:(id)arg1 ;
-(void)setBinding:(id)arg1 ;
-(id)_previousNibBindingConnector;
-(void)_setPreviousNibBindingConnector:(id)arg1 ;
-(void)_updateForVersion:(long long)arg1 ;
-(void)_updateLabel;
@end
