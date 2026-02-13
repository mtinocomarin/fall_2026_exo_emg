// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_10\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 78.03%
// test_accuracy: 53.47%
// prune_trials_per_label: 10
// removed_trials: {'act2': ['act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_33.txt', 'act2\\trial_19.txt', 'act2\\trial_37.txt', 'act2\\trial_18.txt', 'act2\\trial_22.txt', 'act2\\trial_23.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_37.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt', 'act1\\trial_28.txt', 'act1\\trial_10.txt', 'act1\\trial_12.txt']}
// generated: 2025-12-17 13:46:29
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.709019, 0.709004,
    0.297833, -0.297809,
    0.124010, -0.124009,
    -0.196153, 0.196137,
    -0.452866, 0.452898,
    -0.232876, 0.232855,
    0.123113, -0.123119,
    0.214800, -0.214816,
    -0.648253, 0.648205,
    0.246521, -0.246406,
    0.003686, -0.003710,
    0.241572, -0.241623,
};

float Cg_init[2] = {
    -0.289653, -0.289646
};

float xstd_init[12] = {
    0.001042, 0.000080, 0.011129, 0.080626, 0.003124, 0.000857, 0.088062, 0.177662, 0.000860, 0.000107, 0.015984, 0.073112
};

float xmean_init[12] = {
    0.006459, -0.007688, 0.003838, 0.148081, 0.008632, -0.006854, 0.102559, 0.437374, 0.004393, -0.007714, 0.008485, 0.132121
};

