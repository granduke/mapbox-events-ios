#import <Foundation/Foundation.h>
#import "MMETypes.h"

@class MMEEvent;

NS_ASSUME_NONNULL_BEGIN

@protocol MMEAPIClient <NSObject>

@property (nonatomic, copy) NSString *accessToken;
@property (nonatomic, copy) NSString *userAgentBase;

- (void)postEvents:(NS_ARRAY_OF(MMEEvent *) *)events completionHandler:(nullable void (^)(NSError * _Nullable error))completionHandler;
- (void)postEvent:(MMEEvent *)event completionHandler:(nullable void (^)(NSError * _Nullable error))completionHandler;

@end

@interface MMEAPIClient : NSObject<MMEAPIClient>

@property (nonatomic, copy) NSString *accessToken;
@property (nonatomic, copy) NSString *userAgentBase;

- (instancetype)initWithAccessToken:(NSString *)accessToken userAgentBase:(NSString *)userAgentBase;

- (void)postEvents:(NS_ARRAY_OF(MMEEvent *) *)events completionHandler:(nullable void (^)(NSError * _Nullable error))completionHandler;
- (void)postEvent:(MMEEvent *)event completionHandler:(nullable void (^)(NSError * _Nullable error))completionHandler;

@end

NS_ASSUME_NONNULL_END
