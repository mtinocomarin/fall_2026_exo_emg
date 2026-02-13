// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_8\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 86.43%
// test_accuracy: 77.50%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_31.txt', 'act1\\trial_34.txt', 'act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_40.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_2.txt', 'act2\\trial_29.txt', 'act2\\trial_33.txt', 'act2\\trial_6.txt']}
// generated: 2025-12-12 16:06:04
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.942895, 0.942938,
    -0.216845, 0.216884,
    0.642596, -0.642621,
    0.847494, -0.847516,
    1.228851, -1.228898,
    -1.859499, 1.859564,
    0.352137, -0.352169,
    0.127824, -0.127811,
    -0.263365, 0.263443,
    0.601472, -0.601796,
    -0.633652, 0.633770,
    0.266160, -0.266022,
};

float Cg_init[2] = {
    -0.511283, -0.511322
};

float xstd_init[12] = {
    0.003760, 0.001382, 0.099659, 0.168765, 0.001725, 0.000534, 0.030433, 0.085579, 0.000955, 0.000101, 0.020656, 0.069323
};

float xmean_init[12] = {
    0.009830, -0.006253, 0.167524, 0.570000, 0.003305, -0.007695, 0.007238, 0.052857, 0.003233, -0.007804, 0.005429, 0.068286
};

