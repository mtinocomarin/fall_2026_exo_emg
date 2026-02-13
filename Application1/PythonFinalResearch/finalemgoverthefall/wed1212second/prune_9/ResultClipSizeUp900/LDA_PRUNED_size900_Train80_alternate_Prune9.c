// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_9\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.17%
// test_accuracy: 72.06%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_25.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_35.txt', 'act2\\trial_40.txt', 'act2\\trial_16.txt', 'act2\\trial_30.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_1.txt']}
// generated: 2025-12-17 17:03:48
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.252751, 0.252422,
    -0.161614, 0.162283,
    0.019784, -0.019853,
    0.186158, -0.186491,
    1.540636, -1.540442,
    -1.051835, 1.051476,
    -0.053428, 0.053529,
    0.031154, -0.031086,
    -0.469586, 0.469629,
    -0.387323, 0.387276,
    0.550287, -0.550284,
    0.902149, -0.902177,
};

float Cg_init[2] = {
    -0.491431, -0.491381
};

float xstd_init[12] = {
    0.000909, 0.000072, 0.008432, 0.064213, 0.000673, 0.000105, 0.013548, 0.051293, 0.003205, 0.000994, 0.117577, 0.208540
};

float xmean_init[12] = {
    0.005519, -0.007758, 0.002319, 0.091561, 0.002337, -0.007858, 0.004092, 0.044911, 0.008844, -0.006615, 0.133368, 0.474117
};

