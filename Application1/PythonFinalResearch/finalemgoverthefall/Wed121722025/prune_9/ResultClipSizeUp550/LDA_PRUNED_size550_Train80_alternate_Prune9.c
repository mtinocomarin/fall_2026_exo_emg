// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_9\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 76.96%
// test_accuracy: 53.75%
// prune_trials_per_label: 9
// removed_trials: {'act2': ['act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_35.txt', 'act2\\trial_14.txt', 'act2\\trial_33.txt', 'act2\\trial_37.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_23.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_10.txt', 'act1\\trial_25.txt', 'act1\\trial_3.txt']}
// generated: 2025-12-17 13:46:00
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.688453, 0.688461,
    0.347313, -0.347299,
    0.062621, -0.062626,
    -0.197002, 0.196986,
    -0.632859, 0.632852,
    -0.217979, 0.217990,
    0.346364, -0.346370,
    0.251452, -0.251434,
    -0.646137, 0.646214,
    0.286098, -0.286229,
    0.007169, -0.007134,
    0.224613, -0.224585,
};

float Cg_init[2] = {
    -0.273299, -0.273314
};

float xstd_init[12] = {
    0.001056, 0.000080, 0.012412, 0.082479, 0.003005, 0.000795, 0.087867, 0.178339, 0.000850, 0.000109, 0.019478, 0.070643
};

float xmean_init[12] = {
    0.006479, -0.007685, 0.004580, 0.145739, 0.008591, -0.006872, 0.102261, 0.440348, 0.004400, -0.007714, 0.010261, 0.130609
};

