//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSNotificationCenter.h"

@interface NSNotificationCenter (AutoRemove)
+ (void)__methodSwizzlingWithClass:(Class)arg1 originalSelector:(SEL)arg2 swizzledSelector:(SEL)arg3;
+ (void)__setDeallocTaskIdentifierToObserver:(id)arg1 identifier:(unsigned long long)arg2;
+ (unsigned long long)__getDeallocTaskIdentifierFromObserver:(id)arg1;
+ (void)__removeAutoRemoveTaskForObserver:(id)arg1;
+ (void)__setAutoRemoveTaskForObserver:(id)arg1;
+ (_Bool)notificationAutoRemoveEnable;
+ (void)setNotificationAutoRemoveEnable:(_Bool)arg1;
+ (void)load;
- (void)_removeObserver:(id)arg1;
- (id)_addObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)_addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
@end
