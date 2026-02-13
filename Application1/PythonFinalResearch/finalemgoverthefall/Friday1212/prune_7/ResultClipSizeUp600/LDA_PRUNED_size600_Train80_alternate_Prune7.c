// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_7\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.55%
// test_accuracy: 72.16%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_2.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_25.txt', 'act2\\trial_3.txt', 'act2\\trial_35.txt']}
// generated: 2025-12-12 15:49:36
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.774865, 0.774802,
    -0.158580, 0.158628,
    0.404693, -0.404709,
    0.790780, -0.790768,
    0.754551, -0.754522,
    -0.836911, 0.836890,
    -0.077343, 0.077334,
    0.023425, -0.023432,
    -0.526191, 0.525970,
    0.433445, -0.432891,
    -0.374693, 0.374486,
    0.138528, -0.138759,
};

float Cg_init[2] = {
    -0.346059, -0.346026
};

float xstd_init[12] = {
    0.003755, 0.001319, 0.109271, 0.172399, 0.001446, 0.000411, 0.020134, 0.071952, 0.001781, 0.000092, 0.016978, 0.065847
};

float xmean_init[12] = {
    0.009856, -0.006224, 0.177794, 0.590691, 0.003157, -0.007751, 0.005091, 0.048800, 0.003269, -0.007808, 0.004752, 0.066328
};

